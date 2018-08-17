/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-08-17
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // 8-bit signed integer subtraction with saturation
    __m256i epi8_vec_0 = _mm256_set1_epi8(-127);
    __m256i epi8_vec_1 = _mm256_set1_epi8(100);

    __m256i epi8_result = _mm256_subs_epi8(epi8_vec_0, epi8_vec_1);

    char* c = (char*) &epi8_result;
    printf("char:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11], c[12], c[13], c[14], c[15], c[16], c[17], c[18], c[19], c[20], c[21], c[22], c[23], c[24], c[25], c[26], c[27], c[28], c[29], c[30], c[31]);

    // 16-bit signed integer subtraction with saturation
    __m256i epi16_vec_0 = _mm256_set1_epi16(-32767);
    __m256i epi16_vec_1 = _mm256_set1_epi16(100);

    __m256i epi16_result = _mm256_subs_epi16(epi16_vec_0, epi16_vec_1);

    short* sho = (short*) &epi16_result;
    printf("short:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", sho[0], sho[1], sho[2], sho[3], sho[4], sho[5], sho[6], sho[7], sho[8], sho[9], sho[10], sho[11], sho[12], sho[13], sho[14], sho[15]);

    // 8-bit unsigned integer subtraction with saturation
    __m256i epu8_vec_0 = _mm256_set1_epi8(100);
    __m256i epu8_vec_1 = _mm256_set1_epi8(255);

    __m256i epu8_result = _mm256_subs_epu8(epu8_vec_0, epu8_vec_1);

    unsigned char* c_u = (unsigned char*) &epu8_result;
    printf("char:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", c_u[0], c_u[1], c_u[2], c_u[3], c_u[4], c_u[5], c_u[6], c_u[7], c_u[8], c_u[9], c_u[10], c_u[11], c_u[12], c_u[13], c_u[14], c_u[15], c_u[16], c_u[17], c_u[18], c_u[19], c_u[20], c_u[21], c_u[22], c_u[23], c_u[24], c_u[25], c_u[26], c_u[27], c_u[28], c_u[29], c_u[30], c_u[31]);

    // 16-bit unsigned integer subtraction with saturation
    __m256i epu16_vec_0 = _mm256_set1_epi16(100);
    __m256i epu16_vec_1 = _mm256_set1_epi16(65535);

    __m256i epu16_result = _mm256_subs_epu16(epu16_vec_0, epu16_vec_1);

    unsigned short* sho_u = (unsigned short*) &epu16_result;
    printf("short:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", sho_u[0], sho_u[1], sho_u[2], sho_u[3], sho_u[4], sho_u[5], sho_u[6], sho_u[7], sho_u[8], sho_u[9], sho_u[10], sho_u[11], sho_u[12], sho_u[13], sho_u[14], sho_u[15]);

    return 0;
}
