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
    - [Arithmetic Intrinsics](#arithmetic-intrinsics)
        - [Addition and Subtraction](#addition-and-subtraction)
        - [Multiplication and Division](#multiplication-and-division)
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
    > - [_mm_maskload_epi32](Initialization_Intrinsics/src/maskload.c#L60)      `AVX2`
    > - [_mm_maskload_epi64](Initialization_Intrinsics/src/maskload.c#L71)      `AVX2`
    > - [_mm256_maskload_epi32](Initialization_Intrinsics/src/maskload.c#L82)   `AVX2`
    > - [_mm256_maskload_epi64](Initialization_Intrinsics/src/maskload.c#L93)   `AVX2`

## Arithmetic Intrinsics

### Addition and Subtraction

- [add](Arithmetic_Intrinsics/src/add.c)
    > - [_mm256_add_ps](Arithmetic_Intrinsics/src/add.c#L15)
    > - [_mm256_add_pd](Arithmetic_Intrinsics/src/add.c#L24)
    > - [_mm256_add_epi8](Arithmetic_Intrinsics/src/add.c#L33)      `AVX2`
    > - [_mm256_add_epi16](Arithmetic_Intrinsics/src/add.c#L42)     `AVX2`
    > - [_mm256_add_epi32](Arithmetic_Intrinsics/src/add.c#L51)     `AVX2`
    > - [_mm256_add_epi64](Arithmetic_Intrinsics/src/add.c#L60)     `AVX2`

- [sub](Arithmetic_Intrinsics/src/sub.c)
    > - [_mm256_sub_ps](Arithmetic_Intrinsics/src/sub.c#L15)
    > - [_mm256_sub_pd](Arithmetic_Intrinsics/src/sub.c#L24)
    > - [_mm256_sub_epi8](Arithmetic_Intrinsics/src/sub.c#L33)      `AVX2`
    > - [_mm256_sub_epi16](Arithmetic_Intrinsics/src/sub.c#L42)     `AVX2`
    > - [_mm256_sub_epi32](Arithmetic_Intrinsics/src/sub.c#L51)     `AVX2`
    > - [_mm256_sub_epi64](Arithmetic_Intrinsics/src/sub.c#L60)     `AVX2`

- [adds](Arithmetic_Intrinsics/src/adds.c)
    > - [_mm256_adds_epi8](Arithmetic_Intrinsics/src/adds.c#L15)    `AVX2`
    > - [_mm256_adds_epi16](Arithmetic_Intrinsics/src/adds.c#L24)   `AVX2`
    > - [_mm256_adds_epu8](Arithmetic_Intrinsics/src/adds.c#L33)    `AVX2`
    > - [_mm256_adds_epu16](Arithmetic_Intrinsics/src/adds.c#L42)   `AVX2`

- [subs](Arithmetic_Intrinsics/src/subs.c)
    > - [_mm256_subs_epi8](Arithmetic_Intrinsics/src/subs.c#L15)    `AVX2`
    > - [_mm256_subs_epi16](Arithmetic_Intrinsics/src/subs.c#L24)   `AVX2`
    > - [_mm256_subs_epu8](Arithmetic_Intrinsics/src/subs.c#L33)    `AVX2`
    > - [_mm256_subs_epu16](Arithmetic_Intrinsics/src/subs.c#L42)   `AVX2`

- [hadd](Arithmetic_Intrinsics/src/hadd.c)
    > - [_mm256_hadd_ps](Arithmetic_Intrinsics/src/hadd.c#L15)
    > - [_mm256_hadd_pd](Arithmetic_Intrinsics/src/hadd.c#L24)
    > - [_mm256_hadd_epi16](Arithmetic_Intrinsics/src/hadd.c#L33)   `AVX2`
    > - [_mm256_hadd_epi32](Arithmetic_Intrinsics/src/hadd.c#L42)   `AVX2`

- [hsub](Arithmetic_Intrinsics/src/hsub.c)
    > - [_mm256_hadd_ps](Arithmetic_Intrinsics/src/hsub.c#L15)
    > - [_mm256_hadd_pd](Arithmetic_Intrinsics/src/hsub.c#L24)
    > - [_mm256_hadd_epi16](Arithmetic_Intrinsics/src/hsub.c#L33)   `AVX2`
    > - [_mm256_hadd_epi32](Arithmetic_Intrinsics/src/hsub.c#L42)   `AVX2`

- [hadds](Arithmetic_Intrinsics/src/hadds.c)
    > - [_mm256_hadds_epi16](Arithmetic_Intrinsics/src/hadds.c#L15) `AVX2`

- [hsubs](Arithmetic_Intrinsics/src/hsubs.c)
    > - [_mm256_hsubs_epi16](Arithmetic_Intrinsics/src/hsubs.c#L15) `AVX2`
    
- [addsub](Arithmetic_Intrinsics/src/addsub.c)
    > - [_mm256_addsub_ps](Arithmetic_Intrinsics/src/addsub.c#L15)
    > - [_mm256_addsub_pd](Arithmetic_Intrinsics/src/addsub.c#L24)

### Multiplication and Division

- [mul](Arithmetic_Intrinsics/src/mul.c)
    > - [_mm256_mul_ps](Arithmetic_Intrinsics/src/mul.c#L15)
    > - [_mm256_mul_pd](Arithmetic_Intrinsics/src/mul.c#L24)
    > - [_mm256_mul_epi32](Arithmetic_Intrinsics/src/mul.c#L33) `AVX2`
    > - [_mm256_mul_epu32](Arithmetic_Intrinsics/src/mul.c#L42) `AVX2`

- [mullo](Arithmetic_Intrinsics/src/mul.c)
    > - [_mm256_mullo_epi16](Arithmetic_Intrinsics/src/mul.c#L15)   `AVX2`
    > - [_mm256_mullo_epi32](Arithmetic_Intrinsics/src/mul.c#L24)   `AVX2`

- [mulhi](Arithmetic_Intrinsics/src/mulhi.c)
    > - [_mm256_mulhi_epi16](Arithmetic_Intrinsics/src/mulhi.c#L15)   `AVX2`
    > - [_mm256_mulhi_epu16](Arithmetic_Intrinsics/src/mulhi.c#L24)   `AVX2`

- [mulhrs](Arithmetic_Intrinsics/src/mulhrs.c)
    > - [_mm256_mulhrs_epi16](Arithmetic_Intrinsics/src/mulhrs.c#L15)   `AVX2`

- [div](Arithmetic_Intrinsics/src/div.c)
    > - [_mm256_div_ps](Arithmetic_Intrinsics/src/div.c#L15)
    > - [_mm256_div_pd](Arithmetic_Intrinsics/src/div.c#L24)

## Copyright

This project is licensed under the [BSD 3-Clause](LICENSE) license.
