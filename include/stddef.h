#ifndef _STDDEF_H_
#define _STDDEF_H_ 
#include <_stddef.h>
#include <sys/_null.h>

#ifndef _SIZE_T_DEFINED_
#define _SIZE_T_DEFINED_
typedef __size_t size_t;
#endif

#ifndef	_PTRDIFF_T_DEFINED 
#define _PTRDIFF_T_DEFINED
typedef __ptrdiff_t ptrdiff_t;
#endif

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
typedef __intptr_t intptr_t;
#endif 


#endif /* _STDDEF_H_ */
