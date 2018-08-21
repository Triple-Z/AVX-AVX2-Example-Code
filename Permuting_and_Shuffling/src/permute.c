/**
 * Author: TripleZ<me@triplez.cn>
 * Date: 2018-08-21
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    // Single-precision permutation with 128-bit vector
    __m128 float_128_vec_0 = _mm_set_ps(4.0, 3.0, 2.0, 1.0);
    
    __m128 float_128_result = _mm_permute_ps(float_128_vec_0, 0b10011000);

    float* flo = (float*) &float_128_result;
    printf("float:\t\t%f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3]);

    // Double-precision permutation with 128-bit vector
    __m128d double_128_vec_0 = _mm_set_pd(6.0, 5.0);
    
    __m128d double_128_result = _mm_permute_pd(double_128_vec_0, 0b01);

    double* dou = (double*) &double_128_result;
    printf("double:\t\t%lf, %lf\n", dou[0], dou[1]);

    // Single-precision permutation with 256-bit vector
    __m256 float_256_vec_0 = _mm256_set_ps(4.0, 3.0, 2.0, 1.0, 4.0, 3.0, 2.0, 1.0);
    
    __m256 float_256_result = _mm256_permute_ps(float_256_vec_0, 0b10011000);

    flo = (float*) &float_256_result;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision permutation with 256-bit vector
    __m256d double_256_vec_0 = _mm256_set_pd(6.0, 5.0, 6.0, 5.0);
    
    __m256d double_256_result = _mm256_permute_pd(double_256_vec_0, 0b0101);

    dou = (double*) &double_256_result;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    return 0;
}
