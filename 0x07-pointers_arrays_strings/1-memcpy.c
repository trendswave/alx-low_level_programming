#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *sptr = src;
	char *dptr = dest;
	unsigned int i = 0;
	for (i = 0; i < n; i++){
		*dptr++ = *sptr++;
		}
		return dest;
		}
