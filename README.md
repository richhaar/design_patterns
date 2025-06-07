# C++ - Design Patterns

## About

This repository is designed to list examples of design patterns with implementations in C++.

## Directory Structure

- [strategy/](./strategy/) — Implementation of the Strategy Pattern
- *(More patterns coming soon!)*

## Getting Started

### Requirements

Examples have been built with C++23

- C++23 or later compiler
- [CMake](https://cmake.org/) 3.20 or newer
- [Ninja](https://ninja-build.org/) Optional generator for CMake

### Building and running examples - Online

Each subdirectory will have a readme to a Godbolt.org link which will compile and run the code on the web browser. For
example the strategy pattern code can be run here: [https://godbolt.org/z/KWvn8j7qs](https://godbolt.org/z/KWvn8j7qs).

### Building and running examples - locally - Linux

Use CMake to generate the project (This example uses the `ninja-build` generator). Then build the executables using the
generated files and run the executable.

```bash
cmake -S . -B bin -G Ninja
cd bin
ninja strategy_pattern
./strategy/strategy_pattern
```



