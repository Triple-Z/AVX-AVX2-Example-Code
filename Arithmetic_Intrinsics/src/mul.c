/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-08-18
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    // Single-precision multiplication
    __m256 float_vec_0 = _mm256_set1_ps(2.0);
    __m256 float_vec_1 = _mm256_set1_ps(8.0);

    __m256 float_result = _mm256_mul_ps(float_vec_0, float_vec_1);

    float* flo = (float*) &float_result;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision multiplication
    __m256d double_vec_0 = _mm256_set1_pd(2.0);
    __m256d double_vec_1 = _mm256_set1_pd(8.0);

    __m256d double_result = _mm256_mul_pd(double_vec_0, double_vec_1);

    double* dou = (double*) &double_result;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    // Signed 32-bit integer multiplication (AVX2)
    __m256i epi32_vec_0 = _mm256_setr_epi32(2, 2, 3, 3, 4, 4, 5, 5);
    __m256i epi32_vec_1 = _mm256_setr_epi32(8, 8, 9, 9, 10, 10, 11, 11);

    __m256i epi32_result = _mm256_mul_epi32(epi32_vec_0, epi32_vec_1);

    long long int* i = (long long int*) &epi32_result;
    printf("signed int:\t%lld, %lld, %lld, %lld\n", i[0], i[1], i[2], i[3]);

    // Unsigned 32-bit integer multiplication (AVX2)
    __m256i epu32_vec_0 = _mm256_setr_epi32((unsigned int)-1, (unsigned int)-1, 3, 3, 4, 4, 5, 5);
    __m256i epu32_vec_1 = _mm256_setr_epi32(8, 1, 9, 9, 10, 10, 11, 11);

    __m256i epu32_result = _mm256_mul_epu32(epu32_vec_0, epu32_vec_1);

    long long int* u = (long long int*) &epu32_result;
    printf("unsigned int:\t%lld, %lld, %lld, %lld\n", u[0], u[1], u[2], u[3]);

    return 0;
}
