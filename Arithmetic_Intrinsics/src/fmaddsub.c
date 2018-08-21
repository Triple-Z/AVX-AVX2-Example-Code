/**
 * Author: TripleZ<me@triplez.cn>
 * Date: 2018-08-21
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    // Single-precision multiply and add or sub with 128-bit vectors (FMA)
    __m128 float_128_vec_0 = _mm_set1_ps(8.0);
    __m128 float_128_vec_1 = _mm_set1_ps(20.0);
    __m128 float_128_vec_2 = _mm_set1_ps(2.0);

    __m128 float_128_result = _mm_fmaddsub_ps(float_128_vec_0, float_128_vec_1, float_128_vec_2);

    float* flo = (float*) &float_128_result;
    printf("float:\t\t%f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3]);

    // Double-precision multiply and add or sub with 128-bit vectors (FMA)
    __m128d double_128_vec_0 = _mm_set1_pd(8.0);
    __m128d double_128_vec_1 = _mm_set1_pd(20.0);
    __m128d double_128_vec_2 = _mm_set1_pd(2.0);

    __m128d double_128_result = _mm_fmaddsub_pd(double_128_vec_0, double_128_vec_1, double_128_vec_2);

    double* dou = (double*) &double_128_result;
    printf("double:\t\t%lf, %lf\n", dou[0], dou[1]);

    // Single-precision multiply and add or sub with 256-bit vectors (FMA)
    __m256 float_256_vec_0 = _mm256_set1_ps(8.0);
    __m256 float_256_vec_1 = _mm256_set1_ps(20.0);
    __m256 float_256_vec_2 = _mm256_set1_ps(2.0);

    __m256 float_256_result = _mm256_fmaddsub_ps(float_256_vec_0, float_256_vec_1, float_256_vec_2);

    flo = (float*) &float_256_result;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision multiply and add or sub with 256-bit vectors (FMA)
    __m256d double_256_vec_0 = _mm256_set1_pd(8.0);
    __m256d double_256_vec_1 = _mm256_set1_pd(20.0);
    __m256d double_256_vec_2 = _mm256_set1_pd(2.0);

    __m256d double_256_result = _mm256_fmaddsub_pd(double_256_vec_0, double_256_vec_1, double_256_vec_2);

    dou = (double*) &double_256_result;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    return 0;
}
