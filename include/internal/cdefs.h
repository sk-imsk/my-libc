#ifndef __INTERNAL_CDEFS_H_
#define __INTERNAL_CDEFS_H_

#ifdef cplusplus
#define __BEGIN_DECLS extern "C" {
#define __END_DECLS }
#else 
#define __BEGIN_DECLS
#define __END_DECLS
#endif

#ifdef __dead
# if defined(__GNUC__)
#  define __dead __attribute__((__noreturn__))
# else
#  define __dead _Noreturn
# endif
#endif /* __dead */


#endif /*  __INTERNAL_CDEFS_H_ */

