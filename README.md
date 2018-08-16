# AVX / AVX2 Intrinsics Example Code

<!-- TOC -->

- [AVX / AVX2 Intrinsics Example Code](#avx--avx2-intrinsics-example-code)
    - [Quick Start](#quick-start)
        - [Compile](#compile)
        - [Run](#run)
        - [Clean](#clean)
    - [Initialization Intrinsics](#initialization-intrinsics)
        - [Initialization with Scalar Values](#initialization-with-scalar-values)
        - [Loading Data to Memory](#loading-data-to-memory)
    - [Copyright](#copyright)

<!-- /TOC -->

## Quick Start

### Compile

```bash
$ make
```

All the source files in `src/` will be compiled and generate binary files to the `bin/` in each subdirectory.

### Run

Fast compile & run at one time!

Execute this command:

```bash
$ make run
```

At the project root directory, then you can see all the program output on your terminal :tada:

### Clean

It's easy to clean all the output files, just enter the following command at the project root directory:

```bash
$ make clean
```

Then you would find out all the output files are gone away!

## Initialization Intrinsics

### Initialization with Scalar Values

- [setzero](Initialization_Intrinsics/src/setzero.c)
- [set1](Initialization_Intrinsics/src/set1.c)
- [set](Initialization_Intrinsics/src/set.c)
- [setr](Initialization_Intrinsics/src/setr.c)

### Loading Data to Memory

## Copyright

This project is licensed under the [BSD 3-Clause](LICENSE) license.
