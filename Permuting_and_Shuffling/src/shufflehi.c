/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-09-07
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, const char *argv[]) {

    // 16-bit integer shuffle in the high 64 bits of 128-lanes using the control in imm8 (AVX2)
    __m256i epi16_256_vec_0 = _mm256_set_epi16(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

    __m256i epi16_256_result = _mm256_shufflehi_epi16(epi16_256_vec_0, 0b00010111);
    // The result should be: (max -> least) 4, 3, 3, 1, 5, 6, 7, 8,
    //                                      12, 11, 11, 9, 13, 14, 15, 16
    //                       (least -> max) 16, 15, 14, 13, 9, 11, 11, 12,
    //                                      8, 7, 6, 5, 1, 3, 3, 4

    short* sho = (short*) &epi16_256_result;
    printf("short:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", sho[0], sho[1], sho[2], sho[3], sho[4], sho[5], sho[6], sho[7], sho[8], sho[9], sho[10], sho[11], sho[12], sho[13], sho[14], sho[15]);

    return 0;
}
