/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-09-04
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Single-precision shuffle with two 256-bit vectors and 8-bit control value
    __m256 float_256_vec_0 = _mm256_set_ps(1, 2, 3, 4, 5, 6, 7, 8);
    __m256 float_256_vec_1 = _mm256_set_ps(9, 10, 11, 12, 13 ,14, 15, 16);

    __m256 float_256_result = _mm256_shuffle_ps(float_256_vec_0, float_256_vec_1, 0b00010111);
        // The result should be: (max -> least) 12, 11, 3, 1 ,16, 15, 7, 5
        //                       (least -> max) 5, 7, 15, 16, 1, 3, 11, 12

    float* flo = (float*) &float_256_result;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision shuffle with two 256-bit vectors and 4-bit control value
    __m256d double_256_vec_0 = _mm256_set_pd(1, 2, 3, 4);
    __m256d double_256_vec_1 = _mm256_set_pd(5, 6, 7, 8);

    __m256d double_256_result = _mm256_shuffle_pd(double_256_vec_0, double_256_vec_1, 0b0110);
        // The result should be: (max -> least) 6, 1, 7, 4
        //                       (least -> max) 4, 7, 1, 6
    
    double* dou = (double*) &double_256_result;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    // 32-bit integer shuffle with a 256-bit vector and 8-bit control value
    __m256i epi32_256_vec_0 = _mm256_set_epi32(1, 2, 3, 4, 5, 6, 7, 8);
    
    __m256i epi32_256_result = _mm256_shuffle_epi32(epi32_256_vec_0, 0b00010111);
        // The result should be: (max -> least) 4, 3, 3, 1, 8, 7, 7, 5
        //                       (least -> max) 5, 7, 7, 8, 1, 3, 3, 4

    int* i = (int*) &epi32_256_result;
    printf("int:\t\t%d, %d, %d, %d, %d, %d, %d, %d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7]);

    // 8-bit integer shuffle with 256-bit vector and another 256-bit control vector
    __m256i epi8_256_vec_0 = _mm256_set_epi8(1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 
                                             9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16);

    __m256i epi8_256_control_vec = _mm256_set_epi8(0, 0, 1, -1, 2, -2, 3, -3, 4, -4, 5, -5, 6, -6, 7, -7,
                                                   8, -8, 9, -9, 10, -10, 11, -11, 12, -12, 13, -13, 14, -14, 15, -15);

    __m256i epi8_256_result = _mm256_shuffle_epi8(epi8_256_vec_0, epi8_256_control_vec);
    // The result should be: (max -> least) 8, 8, 8, 0, 7, 0, 7, 0, 6, 0, 6, 0, 5, 0, 5, 0,
    //                                      12, 0, 12, 0, 11, 0, 11, 0, 10, 0, 10, 0, 9, 0, 9, 0
    //                       (least -> max) 0, 9, 0, 9, 0, 10, 0, 10, 0, 11, 0, 11, 0, 12, 0, 12,
    //                                      0, 5, 0, 5, 0, 6, 0, 6, 0, 7, 0, 7, 0, 8, 8, 8

    char* c = (char*) &epi8_256_result;
    printf("char:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11], c[12], c[13], c[14], c[15], c[16], c[17], c[18], c[19], c[20], c[21], c[22], c[23], c[24], c[25], c[26], c[27], c[28], c[29], c[30], c[31]);

    return 0;

}
