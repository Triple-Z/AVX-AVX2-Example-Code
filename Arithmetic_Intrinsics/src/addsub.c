/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-08-17
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Single-precision addsub operation
    __m256 float_vec_0 = _mm256_set_ps(1.0, 3.0, 1.0, 3.0, 1.0, 3.0, 1.0, 3.0);
    __m256 float_vec_1 = _mm256_set_ps(2.0, 7.0, 2.0, 7.0, 2.0, 7.0, 2.0, 7.0);

    __m256 float_result = _mm256_addsub_ps(float_vec_0, float_vec_1);  // (3-7), (1+2)

    float* flo = (float*) &float_result;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision addsub operation
    __m256d double_vec_0 = _mm256_set_pd(1.0, 3.0, 1.0, 3.0);
    __m256d double_vec_1 = _mm256_set_pd(2.0, 7.0, 2.0, 7.0);

    __m256d double_result = _mm256_addsub_pd(double_vec_0, double_vec_1);  // (3-7), (1+2)

    double* dou = (double*) &double_result;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);
    
    return 0;
}
