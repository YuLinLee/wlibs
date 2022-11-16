#ifndef _FUNC_H
#define _FUNC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

__attribute__ ((always_inline))
static inline void free_stack(void *ptr) {
    free(*(void **) ptr);
}

#define autofree __attribute__ ((cleanup(free_stack)))

int c_test();

#endif  //_FUNC_H