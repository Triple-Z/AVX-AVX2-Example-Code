/**
 * Author: TripleZ<me@triplez.cn>
 * Date: 2018-08-21
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    // Double-precision permutation with 256-bit vector and 8-bit control value (AVX2)
    __m256d double_256_vec_0 = _mm256_set_pd(4.0, 3.0, 2.0, 1.0);
    
    __m256d double_256_result = _mm256_permute4x64_pd(double_256_vec_0, 0b10011000);

    double* dou = (double*) &double_256_result;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    // 64-bit integer permutation with 256-bit vector and 8-bit control value (AVX2)
    __m256i epi64_256_vec_0 = _mm256_set_epi64x(4, 3, 2, 1);
    
    __m256i epi64_256_result = _mm256_permute4x64_epi64(epi64_256_vec_0, 0b10011000);

    long long int* i = (long long int*) &epi64_256_result;
    printf("long long int:\t %lld, %lld, %lld, %lld\n", i[0], i[1], i[2], i[3]);

    return 0;
}
