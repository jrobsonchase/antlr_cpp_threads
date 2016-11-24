#[macro_use]
extern crate lazy_static;

extern crate futures;
extern crate futures_cpupool;

use std::sync::Mutex;

lazy_static! {
    static ref PARSE_MUTEX: Mutex<bool> = Default::default();
}

use std::os::raw::c_char;

use std::ffi::CString;

extern "C" {
    fn run_parser(input: *const c_char) -> u8;
}

#[allow(unused_variables)]
pub fn run_parser_safe<S: Into<Vec<u8>>>(input: S) -> bool {
    let input = CString::new(input).unwrap();

    let parse_res = unsafe {
        // let lock = PARSE_MUTEX.lock().unwrap();
        run_parser(input.as_ptr())
    };

    if parse_res > 0 { true } else { false }
}

#[cfg(test)]
mod tests {
    use super::*;

    use std::io::Read;

    use std::fs::File;

    use futures_cpupool::CpuPool;

    use futures::Future;

    #[test]
    fn test_parser() {
        let mut input: String = Default::default();
        let mut input_file = File::open("../myparser/grammar/MyGrammar.g4").unwrap();
        input_file.read_to_string(&mut input).unwrap();

        let pool = CpuPool::new_num_cpus();
        let mut futs = vec![];

        for _ in 0..200 {
            let cloned = input.clone();
            futs.push(pool.spawn_fn(move || -> Result<bool, bool> { Ok(run_parser_safe(cloned)) }))
        }

        for f in futs {
            assert!(f.wait().unwrap());
        }
    }
}
