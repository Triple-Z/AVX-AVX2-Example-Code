/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-08-17
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Single-precision horizontal addition
    __m256 float_vec_0 = _mm256_set1_ps(8.0);
    __m256 float_vec_1 = _mm256_set1_ps(17.0);

    __m256 float_result = _mm256_hadd_ps(float_vec_0, float_vec_1);

    float* flo = (float*) &float_result;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision horizontal addition
    __m256d double_vec_0 = _mm256_set1_pd(8.0);
    __m256d double_vec_1 = _mm256_set1_pd(17.0);

    __m256d double_result = _mm256_hadd_pd(double_vec_0, double_vec_1);

    double* dou = (double*) &double_result;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    // 16-bit integer horizontal addition (AVX2)
    __m256i epi16_vec_0 = _mm256_set1_epi16(8);
    __m256i epi16_vec_1 = _mm256_set1_epi16(17);

    __m256i epi16_result = _mm256_hadd_epi16(epi16_vec_0, epi16_vec_1);

    short* sho = (short*) &epi16_result;
    printf("short:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", sho[0], sho[1], sho[2], sho[3], sho[4], sho[5], sho[6], sho[7], sho[8], sho[9], sho[10], sho[11], sho[12], sho[13], sho[14], sho[15]);
    
    // 32-bit integer horizontal addition (AVX2)
    __m256i epi32_vec_0 = _mm256_set1_epi32(8);
    __m256i epi32_vec_1 = _mm256_set1_epi32(17);

    __m256i epi32_result = _mm256_hadd_epi32(epi32_vec_0, epi32_vec_1);

    int* i = (int*) &epi32_result;
    printf("int:\t\t%d, %d, %d, %d, %d, %d, %d, %d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7]);

    return 0;
}
