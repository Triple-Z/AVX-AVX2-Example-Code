/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-08-17
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    // Mask-load 128-bit single-precision vector
    float floats_128[4] = {1.0, 2.0, 3.0, 4.0};
    
    __m128i mask_128_ps = _mm_setr_epi32(-3, -2 ,-1, 0);

    __m128 float_vec = _mm_maskload_ps(floats_128, mask_128_ps);

    float* flo = (float*) &float_vec;
    printf("float:\t\t%f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3]);


    // Mask-load 128-bit double-precision vector
    double doubles_128[2] = {5.0, 6.0};
    
    __m128i mask_128_pd = _mm_setr_epi32(-1, -1, 1, 1);

    __m128d double_vec = _mm_maskload_pd(doubles_128, mask_128_pd);

    double* dou = (double*) &double_vec;
    printf("double:\t\t%lf, %lf\n", dou[0], dou[1]);


    // Mask-load 256-bit single-precision vector
    float floats_256[8] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0};
    
    __m256i mask_256_ps = _mm256_setr_epi32(-3, -2 ,-1, 0, 1, 2, 3, 4);

    __m256 float_vec_256 = _mm256_maskload_ps(floats_256, mask_256_ps);

    float* flo_256 = (float*) &float_vec_256;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo_256[0], flo_256[1], flo_256[2], flo_256[3], flo_256[4], flo_256[5], flo_256[6], flo_256[7]);


    // Mask-load 256-bit double-precision vector
    double doubles_256[4] = {5.0, 6.0, 7.0, 8.0};
    
    __m256i mask_256_pd = _mm256_setr_epi64x(-1, 1, -1, 1);

    __m256d double_vec_256 = _mm256_maskload_pd(doubles_256, mask_256_pd);

    double* dou_256 = (double*) &double_vec_256;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou_256[0], dou_256[1], dou_256[2], dou_256[3]);


    // Mask-load 128-bit 32-bit-integer vector (AVX2)
    int int32_128[4] = {1, 2, 3, 4};
    
    __m128i mask_128_epi32 = _mm_setr_epi32(-3, -2 ,-1, 0);

    __m128i int32_vec_128 = _mm_maskload_epi32(int32_128, mask_128_epi32);

    int* i_v_32_128 = (int*) &int32_vec_128;
    printf("int:\t\t%d, %d, %d, %d\n", i_v_32_128[0], i_v_32_128[1], i_v_32_128[2], i_v_32_128[3]);


    // Mask-load 128-bit 64-bit-integer vector (AVX2)
    long long int int64_128[2] = {1, 2};
    
    __m128i mask_128_epi64 = _mm_setr_epi32(-1, -1, 1, 1);

    __m128i int64_vec_128 = _mm_maskload_epi64(int64_128, mask_128_epi64);

    long long int* i_v_64_128 = (long long int*) &int64_vec_128;
    printf("long long:\t%lld, %lld\n", i_v_64_128[0], i_v_64_128[1]);


    // Mask-load 256-bit 32-bit-integer vector (AVX2)
    int int32_256[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    __m256i mask_256_epi32 = _mm256_setr_epi32(-3, -2 ,-1, 0, 1, 2, -10, 4);

    __m256i int32_vec_256 = _mm256_maskload_epi32(int32_256, mask_256_epi32);

    int* i_v_32_256 = (int*) &int32_vec_256;
    printf("int:\t\t%d, %d, %d, %d, %d, %d, %d, %d\n", i_v_32_256[0], i_v_32_256[1], i_v_32_256[2], i_v_32_256[3], i_v_32_256[4], i_v_32_256[5], i_v_32_256[6], i_v_32_256[7]);


    // Mask-load 256-bit 64-bit-integer vector (AVX2)
    long long int int64_256[4] = {1, 2, 3, 4};
    
    __m256i mask_256_epi64 = _mm256_setr_epi64x(1, -1, 1, -1);

    __m256i int64_vec_256 = _mm256_maskload_epi64(int64_256, mask_256_epi64);

    long long int* i_v_64_256 = (long long int*) &int64_vec_256;
    printf("long long:\t%lld, %lld, %lld, %lld\n", i_v_64_256[0], i_v_64_256[1], i_v_64_256[2], i_v_64_256[3]);


    return 0;
}

