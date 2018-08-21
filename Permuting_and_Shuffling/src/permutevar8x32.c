/**
 * Author: TripleZ<me@triplez.cn>
 * Date: 2018-08-21
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    // Single-precision 8x32 permutation with 256-bit vector and 32-bit integers control vector (AVX2)
    __m256 float_256_vec_0 = _mm256_set_ps(8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0);
    __m256i epi32_256_ctl_0 = _mm256_set_epi32(0, 1, 2, 3, 4, 5, 6, 7);
    
    __m256 float_256_result = _mm256_permutevar8x32_ps(float_256_vec_0, epi32_256_ctl_0);

    float* flo = (float*) &float_256_result;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // 32-bit integer 8x32 permutation with 256-bit vector and 32-bit integers control vector (AVX2)
    __m256i epi32_256_vec_0 = _mm256_set_epi32(8, 7, 6, 5, 4, 3, 2, 1);
    __m256i epi32_256_ctl_1 = _mm256_set_epi32(0, 1, 2, 3, 4, 5, 6, 7);

    __m256i epi32_256_result = _mm256_permutevar8x32_epi32(epi32_256_vec_0, epi32_256_ctl_1);

    int* i = (int*) &epi32_256_result;
    printf("int:\t\t%d, %d, %d, %d, %d, %d, %d, %d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7]);

    return 0;
}
