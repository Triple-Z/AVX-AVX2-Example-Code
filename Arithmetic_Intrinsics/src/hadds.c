/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-08-17
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // 16-bit integer horizontal addition with saturation (AVX2)
    __m256i epi16_vec_0 = _mm256_set1_epi16(32700);
    __m256i epi16_vec_1 = _mm256_set1_epi16(17);

    __m256i epi16_result = _mm256_hadds_epi16(epi16_vec_0, epi16_vec_1);

    short* sho = (short*) &epi16_result;
    printf("short:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", sho[0], sho[1], sho[2], sho[3], sho[4], sho[5], sho[6], sho[7], sho[8], sho[9], sho[10], sho[11], sho[12], sho[13], sho[14], sho[15]);
    

    return 0;
}
