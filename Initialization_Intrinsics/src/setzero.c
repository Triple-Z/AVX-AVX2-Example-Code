/**
 * Author: TripleZ<me@triplez.cn>
 * Date: 2018-08-16
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Single-precision
    __m256 float_vec = _mm256_setzero_ps();

    float* flo = (float*) &float_vec;
    printf("float:\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision
    __m256d double_vec = _mm256_setzero_pd();

    double* dou = (double*) &double_vec;
    printf("double:\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    // Integers
    __m256i int_vec = _mm256_setzero_si256();

    int* i = (int*) &int_vec;
    printf("int:\t%d, %d, %d, %d, %d, %d, %d, %d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7]); 

    return 0;
}
