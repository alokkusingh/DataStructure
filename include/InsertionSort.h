#ifndef __INSERTION_SORT__
#define __INSERTION_SORT__

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

void isort(void *, size_t, size_t, int (*)(const void *, const void *));

#ifdef __cplusplus
}
#endif

#endif
