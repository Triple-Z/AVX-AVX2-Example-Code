/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-08-18
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    // Signed 16-bit integer multiplication with low bits
    __m256i epi16_vec_0 = _mm256_setr_epi16(1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 32767, 32767, 32767);
    __m256i epi16_vec_1 = _mm256_setr_epi16(1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 3, 3);

    __m256i epi16_result = _mm256_mullo_epi16(epi16_vec_0, epi16_vec_1);

    short* sho = (short*) &epi16_result;
    printf("short:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", sho[0], sho[1], sho[2], sho[3], sho[4], sho[5], sho[6], sho[7], sho[8], sho[9], sho[10], sho[11], sho[12], sho[13], sho[14], sho[15]);    

    // Signed 32-bit integer multiplication with low bits
    __m256i epi32_vec_0 = _mm256_setr_epi32(1, 3, 1, 3, 1, 2147483647, 2147483647, 2147483647);
    __m256i epi32_vec_1 = _mm256_setr_epi32(1, 3, 1, 3, 1, 3, 3, 3);

    __m256i epi32_result = _mm256_mullo_epi32(epi32_vec_0, epi32_vec_1);

    int* i = (int*) &epi32_result;
    printf("int:\t\t%d, %d, %d, %d, %d, %d, %d, %d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7]);

    return 0;
}
