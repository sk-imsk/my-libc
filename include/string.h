#ifndef _STRING_H_
#define _STRING_H

#include <stddef.h>
#include "internal/cdefs.h"

__BEGIN_DECLS

char * stpcpy (char *restrict dst, const char *restrict src);
char * strchr (const char *s, int c);
char * strrchr(const char *s, int c);
char * strcpy (char *restrict dst, const char *restrict src);
char * strncpy(char *restrict dst, const char *restrict src, size_t size);
int    strcmp (const char * s1, const char * s2);
int    strncmp(const char * s1, const char * s2, size_t size);
int    strcoll(const char * s1, const char * s2);
char * strcat (char *restrict dst, const char *restrict src);
char * strncat(char *restrict dst, const char *restrict src, size_t size);
size_t strlen (const char *restrict src);
size_t strnlen(const char *restrict src, size_t size);
char * strerror(int err);

__END_DECLS

#endif
