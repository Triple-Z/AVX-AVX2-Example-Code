/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-08-20
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Signed 16-bit integer multiplication only store high bits without sign bit (AVX2)
    __m256i epi16_vec_0 = _mm256_setr_epi16(32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767);
    __m256i epi16_vec_1 = _mm256_setr_epi16((unsigned short) 65535, (unsigned short) 65536, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 4, 5);

    __m256i epi16_result = _mm256_mulhrs_epi16(epi16_vec_0, epi16_vec_1);

    unsigned short *sho = (unsigned short *)&epi16_result;
    printf("short:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", sho[0], sho[1], sho[2], sho[3], sho[4], sho[5], sho[6], sho[7], sho[8], sho[9], sho[10], sho[11], sho[12], sho[13], sho[14], sho[15]);

    return 0;
}
