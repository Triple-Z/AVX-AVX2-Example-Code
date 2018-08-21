/**
 * Author: TripleZ<me@triplez.cn>
 * Date: 2018-08-21
 */

#include <immintrin.h>
#include <stdio.h>

#include "gcc_support.h"

int main(int argc, char const *argv[]) {
    
    // Single-precision permutation with two 256-bit vectors and 8-bit control value
    __m128 float_128_vec_0 = _mm_set1_ps(1.0);
    __m128 float_128_vec_1 = _mm_set1_ps(2.0);
    __m128 float_128_vec_2 = _mm_set1_ps(3.0);
    __m128 float_128_vec_3 = _mm_set1_ps(4.0);

    __m256 float_256_vec_0 = _mm256_set_m128(float_128_vec_1, float_128_vec_0);
    __m256 float_256_vec_1 = _mm256_set_m128(float_128_vec_3, float_128_vec_2);
    
    __m256 float_256_result = _mm256_permute2f128_ps(float_256_vec_0, float_256_vec_1, 0b11010010);

    float* flo = (float*) &float_256_result;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision permutation with two 256-bit vectors and 8-bit control value
    __m128d double_128_vec_0 = _mm_set1_pd(1.0);
    __m128d double_128_vec_1 = _mm_set1_pd(2.0);
    __m128d double_128_vec_2 = _mm_set1_pd(3.0);
    __m128d double_128_vec_3 = _mm_set1_pd(4.0);

    __m256d double_256_vec_0 = _mm256_set_m128d(double_128_vec_1, double_128_vec_0);
    __m256d double_256_vec_1 = _mm256_set_m128d(double_128_vec_3, double_128_vec_2);
    
    __m256d double_256_result = _mm256_permute2f128_pd(double_256_vec_0, double_256_vec_1, 0b11010010);

    double* dou = (double*) &double_256_result;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    // 32-bit integer permutation with two 256-bit vectors and 8-bit control value
    __m128i epi32_128_vec_0 = _mm_set1_epi32(1);
    __m128i epi32_128_vec_1 = _mm_set1_epi32(2);
    __m128i epi32_128_vec_2 = _mm_set1_epi32(3);
    __m128i epi32_128_vec_3 = _mm_set1_epi32(4);

    __m256i epi32_256_vec_0 = _mm256_set_m128i(epi32_128_vec_1, epi32_128_vec_0);
    __m256i epi32_256_vec_1 = _mm256_set_m128i(epi32_128_vec_3, epi32_128_vec_2);

    __m256i epi32_256_result = _mm256_permute2f128_si256(epi32_256_vec_0, epi32_256_vec_1, 0b11010010);

    int* i = (int*) &epi32_256_result;
    printf("int:\t\t%d, %d, %d, %d, %d, %d, %d, %d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7]);

    return 0;
}
