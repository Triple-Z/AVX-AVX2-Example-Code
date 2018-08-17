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
> - [_mm256_setzero_ps](Initialization_Intrinsics/src/setzero.c#L12)
> - [_mm256_setzero_pd](Initialization_Intrinsics/src/setzero.c#L18)
> - [_mm256_setzero_si256](Initialization_Intrinsics/src/setzero.c#L24)

- [set1](Initialization_Intrinsics/src/set1.c)
> - [_mm256_set1_ps](Initialization_Intrinsics/src/set1.c#L12)
> - [_mm256_set1_pd](Initialization_Intrinsics/src/set1.c#L18)
> - [_mm256_set1_epi32](Initialization_Intrinsics/src/set1.c#L24)
> - [_mm256_set1_epi64x](Initialization_Intrinsics/src/set1.c#L30)
> - [_mm256_set1_epi16](Initialization_Intrinsics/src/set1.c#L36)
> - [_mm256_set1_epi8](Initialization_Intrinsics/src/set1.c#L42)

- [set](Initialization_Intrinsics/src/set.c)
> - [_mm256_set_ps](Initialization_Intrinsics/src/set.c#L17)
> - [_mm256_set_pd](Initialization_Intrinsics/src/set.c#L23)
> - [_mm256_set_epi32](Initialization_Intrinsics/src/set.c#L29)
> - [_mm256_set_epi64x](Initialization_Intrinsics/src/set.c#L35)
> - [_mm256_set_epi16](Initialization_Intrinsics/src/set.c#L41)
> - [_mm256_set_epi8](Initialization_Intrinsics/src/set.c#L47)
> - [_mm256_set_m128](Initialization_Intrinsics/src/set.c#L56)
> - [_mm256_set_m128d](Initialization_Intrinsics/src/set.c#L64)
> - [_mm256_set_m128i](Initialization_Intrinsics/src/set.c#L72)

- [setr](Initialization_Intrinsics/src/setr.c)
> - [_mm256_setr_ps](Initialization_Intrinsics/src/setr.c#L17)
> - [_mm256_setr_pd](Initialization_Intrinsics/src/setr.c#L23)
> - [_mm256_setr_epi32](Initialization_Intrinsics/src/setr.c#L29)
> - [_mm256_setr_epi64x](Initialization_Intrinsics/src/setr.c#L35)
> - [_mm256_setr_epi16](Initialization_Intrinsics/src/setr.c#L41)
> - [_mm256_setr_epi8](Initialization_Intrinsics/src/setr.c#L47)
> - [_mm256_setr_m128](Initialization_Intrinsics/src/setr.c#L56)
> - [_mm256_setr_m128d](Initialization_Intrinsics/src/setr.c#L64)
> - [_mm256_setr_m128i](Initialization_Intrinsics/src/setr.c#L72)

### Loading Data to Memory

- [load](Initialization_Intrinsics/src/load.c)
> - [_mm256_load_ps](Initialization_Intrinsics/src/load.c#L18)
> - [_mm256_load_pd](Initialization_Intrinsics/src/load.c#L29)
> - [_mm256_load_si256](Initialization_Intrinsics/src/load.c#L40)

- [loadu](Initialization_Intrinsics/src/loadu.c)
> - [_mm256_loadu_ps](Initialization_Intrinsics/src/loadu.c#L18)
> - [_mm256_loadu_pd](Initialization_Intrinsics/src/loadu.c#L29)
> - [_mm256_loadu_si256](Initialization_Intrinsics/src/loadu.c#L40)

- [maskload](Initialization_Intrinsics/src/maskload.c)
> - [_mm_maskload_ps](Initialization_Intrinsics/src/maskload.c#L16)
> - [_mm_maskload_pd](Initialization_Intrinsics/src/maskload.c#L27)
> - [_mm256_maskload_ps](Initialization_Intrinsics/src/maskload.c#L38)
> - [_mm256_maskload_pd](Initialization_Intrinsics/src/maskload.c#L49)
> - [_mm_maskload_epi32](Initialization_Intrinsics/src/maskload.c#L60) `AVX2`
> - [_mm_maskload_epi64](Initialization_Intrinsics/src/maskload.c#L71) `AVX2`
> - [_mm256_maskload_epi32](Initialization_Intrinsics/src/maskload.c#L82) `AVX2`
> - [_mm256_maskload_epi64](Initialization_Intrinsics/src/maskload.c#L93) `AVX2`

## Copyright

This project is licensed under the [BSD 3-Clause](LICENSE) license.
