#ifndef _STDLIB_H_
#define _STDLIB_H_
#include "internal/cdefs.h"
#include <sys/types.h>

typedef struct {
 int rem;
 int quot;
} div_t; // i love division

typedef struct {
 long rem;
 long quot;
} ldiv_t; // div_t but long

typedef struct {
 long long quot;
 long long rem;
} lldiv_t;

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

__BEGIN_DECLS

__dead void exit(int i);
int abs (int i); 
int atoi(const char * str);



__END_DECLS
#endif /* _STDLIB_H_ */
