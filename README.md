### Demonstration of a race condition in the antlr4 cpp target when called from rust

Includes:

- Antlr4 Cpp runtime
- Simple self-parsing grammar
- Executable showing the race

#### How-to

- Build `myparser` as you would any cmake project.

- run the resulting `run_parser` binary and watch the fireworks.

- Uncomment the mutex lock/unlock on lines 20 and 22 of
  `myparser/src/bin/main.cpp`. Repeat step 2. It should exit successfully.
