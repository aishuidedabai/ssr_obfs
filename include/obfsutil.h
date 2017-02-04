#ifndef _OBFSUTIL_H
#define _OBFSUTIL_H

#include <stdlib.h>

int get_head_size(char *plaindata, int size, int def_size);

void init_shift128plus(void);

uint64_t xorshift128plus(void);

#endif // _OBFSUTIL_H
