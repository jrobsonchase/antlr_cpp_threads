extern crate cmake;

use self::cmake::Config;

fn main() {
    println!("cargo:rustc-link-search=native=../cpp-static/lib");
    println!("cargo:rustc-link-lib=static=antlr4-runtime");
    println!("cargo:rustc-link-lib=static=myparser");
    println!("cargo:rustc-link-lib=dylib=stdc++")
}
