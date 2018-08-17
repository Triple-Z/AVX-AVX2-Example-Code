/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-08-17
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Single-precision addition
    __m256 float_vec_0 = _mm256_set1_ps(8.0);
    __m256 float_vec_1 = _mm256_set1_ps(17.0);

    __m256 float_result = _mm256_add_ps(float_vec_0, float_vec_1);

    float* flo = (float*) &float_result;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision addition
    __m256d double_vec_0 = _mm256_set1_pd(8.0);
    __m256d double_vec_1 = _mm256_set1_pd(17.0);

    __m256d double_result = _mm256_add_pd(double_vec_0, double_vec_1);

    double* dou = (double*) &double_result;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    // 8-bit integer addition (AVX2)
    __m256i epi8_vec_0 = _mm256_set1_epi8(8);
    __m256i epi8_vec_1 = _mm256_set1_epi8(17);

    __m256i epi8_result = _mm256_add_epi8(epi8_vec_0, epi8_vec_1);

    char* c = (char*) &epi8_result;
    printf("char:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11], c[12], c[13], c[14], c[15], c[16], c[17], c[18], c[19], c[20], c[21], c[22], c[23], c[24], c[25], c[26], c[27], c[28], c[29], c[30], c[31]);

    // 16-bit integer addition (AVX2)
    __m256i epi16_vec_0 = _mm256_set1_epi16(8);
    __m256i epi16_vec_1 = _mm256_set1_epi16(17);

    __m256i epi16_result = _mm256_add_epi16(epi16_vec_0, epi16_vec_1);

    short* sho = (short*) &epi16_result;
    printf("short:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", sho[0], sho[1], sho[2], sho[3], sho[4], sho[5], sho[6], sho[7], sho[8], sho[9], sho[10], sho[11], sho[12], sho[13], sho[14], sho[15]);
    
    // 32-bit integer addition (AVX2)
    __m256i epi32_vec_0 = _mm256_set1_epi32(8);
    __m256i epi32_vec_1 = _mm256_set1_epi32(17);

    __m256i epi32_result = _mm256_add_epi32(epi32_vec_0, epi32_vec_1);

    int* i = (int*) &epi32_result;
    printf("int:\t\t%d, %d, %d, %d, %d, %d, %d, %d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7]);

    // 64-bit integer addition (AVX2)
    __m256i epi64_vec_0 = _mm256_set1_epi64x(8);
    __m256i epi64_vec_1 = _mm256_set1_epi64x(17);

    __m256i epi64_result = _mm256_add_epi64(epi64_vec_0, epi64_vec_1);

    long long int* lo = (long long int*) &epi64_result;
    printf("long long:\t%lld, %lld, %lld, %lld\n", lo[0], lo[1], lo[2], lo[3]);

    return 0;
}
