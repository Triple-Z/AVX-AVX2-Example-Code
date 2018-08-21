/**
 * Author: TripleZ<me@triplez.cn>
 * Date: 2018-08-21
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    // Single-precision permutation with 128-bit vector and 32-bit integers control value
    __m128 float_128_vec_0 = _mm_set_ps(4.0, 3.0, 2.0, 1.0);
    __m128i epi32_128_vec_0 = _mm_set_epi32(2, 1, 6, 0);
    
    __m128 float_128_result = _mm_permutevar_ps(float_128_vec_0, epi32_128_vec_0);

    float* flo = (float*) &float_128_result;
    printf("float:\t\t%f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3]);

    // Double-precision permutation with 128-bit vector and 64-bit integers control value
    __m128d double_128_vec_0 = _mm_set_pd(6.0, 5.0);
    __m128i epi32_128_vec_1 = _mm_set_epi64x(2, 1);
    
    __m128d double_128_result = _mm_permutevar_pd(double_128_vec_0, epi32_128_vec_1);

    double* dou = (double*) &double_128_result;
    printf("double:\t\t%lf, %lf\n", dou[0], dou[1]);

    // Single-precision permutation with 256-bit vector adn 32-bit integers control value
    __m256 float_256_vec_0 = _mm256_set_ps(4.0, 3.0, 2.0, 1.0, 4.0, 3.0, 2.0, 1.0);
    __m256i epi32_256_vec_0 = _mm256_set_epi32(2, 1, 2, 0, 2, 1, 2, 0);
    
    __m256 float_256_result = _mm256_permutevar_ps(float_256_vec_0, epi32_256_vec_0);

    flo = (float*) &float_256_result;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision permutation with 256-bit vector and 64-bit integers control value
    __m256d double_256_vec_0 = _mm256_set_pd(6.0, 5.0, 6.0, 5.0);
    __m256i epi32_256_vec_1 = _mm256_set_epi64x(2, 1, 2, 0);
    
    __m256d double_256_result = _mm256_permutevar_pd(double_256_vec_0, epi32_256_vec_1);

    dou = (double*) &double_256_result;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    return 0;
}
