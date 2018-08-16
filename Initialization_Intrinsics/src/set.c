/**
 * Author: TripleZ<me@triplez.cn>
 * Date: 2018-08-16
 */

#include <immintrin.h>  // AVX/AVX2
#include <xmmintrin.h>  // SSE
#include <emmintrin.h>  // SSE2
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Single-precision    
    __m256 float_vec = _mm256_set_ps(1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0);

    float* flo = (float*) &float_vec;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision
    __m256d double_vec = _mm256_set_pd(9.0, 10.0, 11.0, 12.0);

    double* dou = (double*) &double_vec;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    // 32-bit integer
    __m256i int_vec = _mm256_set_epi32(1, 2, 3, 4, 5, 6, 7, 8);

    int* i = (int*) &int_vec;
    printf("int:\t\t%d, %d, %d, %d, %d, %d, %d, %d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7]);

    // 64-bit integer
    __m256i long_vec = _mm256_set_epi64x(9, 10, 11, 12);

    long long* lo = (long long*) &long_vec;
    printf("long long:\t%d, %d, %d, %d\n", lo[0], lo[1], lo[2], lo[3]);

    // 16-bit integer
    __m256i short_vec = _mm256_set_epi16(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

    short* sho = (short*) &short_vec;
    printf("short:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", sho[0], sho[1], sho[2], sho[3], sho[4], sho[5], sho[6], sho[7], sho[8], sho[9], sho[10], sho[11], sho[12], sho[13], sho[14], sho[15]);

    // 8-bit integer
    __m256i char_vec = _mm256_set_epi8(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32);

    char* c = (char*) &char_vec;
    printf("char:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11], c[12], c[13], c[14], c[15], c[16], c[17], c[18], c[19], c[20], c[21], c[22], c[23], c[24], c[25], c[26], c[27], c[28], c[29], c[30], c[31]);

    // Set value from 128-bit single-precision vectors
    __m128 float_vec_128_0 = _mm_set_ps(1.0, 2.0, 3.0, 4.0);
    __m128 float_vec_128_1 = _mm_set_ps(5.0, 6.0, 7.0, 8.0);

    __m256 float_vec_256 = _mm256_set_m128(float_vec_128_1, float_vec_128_0);
    float* flo_256 = (float*) &float_vec_256;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo_256[0], flo_256[1], flo_256[2], flo_256[3], flo_256[4], flo_256[5], flo_256[6], flo_256[7]);

    // Set value from 128-bit double-precision vectors
    __m128d double_vec_128_0 = _mm_set_pd(9.0, 10.0);
    __m128d double_vec_128_1 = _mm_set_pd(11.0, 12.0);

    __m256d double_vec_256 = _mm256_set_m128d(double_vec_128_1, double_vec_128_0);
    double* dou_256 = (double*) &double_vec_256;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou_256[0], dou_256[1], dou_256[2], dou_256[3]);

    // Set value from 128-bit integer vectors
    __m128i int_vec_128_0 = _mm_set_epi32(1, 2, 3, 4);
    __m128i int_vec_128_1 = _mm_set_epi32(5, 6, 7, 8);

    __m256i int_vec_256 = _mm256_set_m128i(int_vec_128_1, int_vec_128_0);
    int* i_256 = (int*) &int_vec_256;
    printf("int:\t\t%d, %d, %d, %d, %d, %d, %d, %d\n", i_256[0], i_256[1], i_256[2], i_256[3], i_256[4], i_256[5], i_256[6], i_256[7]);

    return 0;

}
