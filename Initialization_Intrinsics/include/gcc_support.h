/**
 * Author: TripleZ<me@triplez.cn>
 * Date: 2018-08-16
 */

#ifndef __GCC_SUPPORT_H
#define __GCC_SUPPORT_H

#define _mm256_set_m128(vh, vl) \
        _mm256_insertf128_ps(_mm256_castps128_ps256(vl), vh, 1)

#define _mm256_set_m128d(vh, vl) \
        _mm256_insertf128_pd(_mm256_castpd128_pd256(vl), (vh), 1)

#define _mm256_set_m128i(vh, vl) \
        _mm256_insertf128_si256(_mm256_castsi128_si256(vl), (vh), 1)

#define _mm256_setr_m128(vh, vl) \
        _mm256_set_m128((vl), (vh))

#define _mm256_setr_m128d(vh, vl) \
        _mm256_set_m128d((vl), (vh))

#define _mm256_setr_m128i(vh, vl) \
        _mm256_set_m128i((vl), (vh))

#endif