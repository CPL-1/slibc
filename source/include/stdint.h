#ifndef __STDINT_H__
#define __STDINT_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef __UINT8_TYPE__  uint8_t;
typedef __UINT16_TYPE__ uint16_t;
typedef __UINT32_TYPE__ uint32_t;
typedef __UINT64_TYPE__ uint64_t;

typedef __INT8_TYPE__  int8_t;
typedef __INT16_TYPE__ int16_t;
typedef __INT32_TYPE__ int32_t;
typedef __INT64_TYPE__ int64_t;
#define INT8_MAX  __INT8_MAX
#define INT16_MAX __INT16_MAX
#define INT32_MAX __INT32_MAX
#define INT64_MAX __INT64_MAX
#define INT8_MIN  (-__INT8_MAX - 1)
#define INT16_MIN (-__INT16_MAX - 1)
#define INT32_MIN (-__INT32_MAX - 1)
#define INT64_MIN (-__INT64_MAX - 1)

typedef __UINT8_TYPE__  uint_fast8_t;
typedef __UINT32_TYPE__ uint_fast16_t;
typedef __UINT32_TYPE__ uint_fast32_t;
typedef __UINT64_TYPE__ uint_fast64_t;
#define UINT_FAST8_MAX  UINT8_MAX
#define UINT_FAST16_MAX UINT64_MAX
#define UINT_FAST32_MAX UINT64_MAX
#define UINT_FAST64_MAX UINT64_MAX
#define UINT_FAST8_MIN  UINT8_MIN
#define UINT_FAST16_MIN UINT64_MIN
#define UINT_FAST32_MIN UINT64_MIN
#define UINT_FAST64_MIN UINT64_MIN

typedef __INT8_TYPE__  int_fast8_t;
typedef __INT32_TYPE__ int_fast16_t;
typedef __INT32_TYPE__ int_fast32_t;
typedef __INT64_TYPE__ int_fast64_t;
#define INT_FAST8_MAX  INT8_MAX
#define INT_FAST16_MAX INT32_MAX
#define INT_FAST32_MAX INT32_MAX
#define INT_FAST64_MAX INT64_MAX
#define INT_FAST8_MIN  INT8_MIN
#define INT_FAST16_MIN INT32_MIN
#define INT_FAST32_MIN INT32_MIN
#define INT_FAST64_MIN INT64_MIN

typedef __INTMAX_TYPE__  intmax_t;
typedef __INTPTR_TYPE__  intptr_t;
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#define INTMAX_MAX  __INTMAX_MAX__
#define INTPTR_MAX  __INTPTR_MAX__
#define PTRDIFF_MAX __PTRDIFF_MAX__
#define INTMAX_MIN  (-__INTMAX_MAX__ - 1)
#define INTPTR_MIN  (-__INTPTR_MAX__ - 1)
#define PTRDIFF_MIN (-__PTRDIFF_MAX__ - 1)

typedef __UINTMAX_TYPE__ uintmax_t;
typedef __UINTPTR_TYPE__ uintptr_t;
typedef __SIZE_TYPE__    size_t;
#define UINTMAX_MAX __UINTMAX_MAX__
#define UINTPTR_MAX __UINTPTR_MAX__
#define SIZE_MAX    __SIZE_MAX__

#define WCHAR_MAX __WCHAR_MAX__
#define WCHAR_MIN __WCHAR_MIN__

#define WINT_MAX __WINT_MAX__
#define WINT_MIN __WINT_MIN__

#define SIG_ATOMIC_MAX __SIG_ATOMIC_MAX__
#define SIG_ATOMIC_MIN __SIG_ATOMIC_MIN__

#ifdef __cplusplus
}
#endif

#endif
