### Demonstration of a race condition in the antlr4 cpp target when called from rust

Pretty quickly hacked together and doesn't make any attempts to follow
any packaging best practices. Instructions and linker setup may be
linux-specific - I haven't tested it on anything else.

Includes:

- Antlr4 Cpp runtime
- Simple self-parsing grammar
- Rust test case illustrating the race

#### How-to

- Run the `build_cpp.sh` script from the top of the repository. This will
  compile the libraries and place them in a new `cpp-static` directory.

- From the antlr-rust directory: run `cargo test` a few times. Watch as it
  either passes, segfaults, runs forever, or parse failures occur.

- Uncomment the mutex lock on line 26 of `antlr-rust/src/lib.rs`. Repeat step 2.
  Watch as it passes every time.
