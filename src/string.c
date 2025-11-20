#include <string.h>
#include <errno.h>

char * stpcpy(char *restrict dst, const char *restrict src){
	
	while (*dst++ = *src++){
	//nothing
	}
	return dst;
}

char * strchr(const char *s, int c){
	for (;; ++s){
		if (*s == (char)c){
		
		return ((char *)s);
	} 
	if (!*s){
	return ((char *)NULL);
	}
}// for (;;, ++s)
	
}

char * strrchr(const char *p, int c){
	char *save;

	for (save = NULL;; ++p) {
		if (*p == (char)c)
			save = (char *)p;
		if (!*p)
			return(save);
	}
	/* NOTREACHED */
}



char * strcpy(char *restrict dst, const char *restrict src){
	char * ret = dst;
	while (*dst++ = *src++){
	// nothing
	}
	return ret;
}

char * strncpy(char *restrict dst, const char *restrict src, size_t size){
	int i = 0;
	char * ret = dst;
	while ((*dst++ = *src++ )&& (i < size)){
		i++;
	}
	while (i < size){
		*dst++ = '\0';
	}
	
	return ret;

}

int strcmp(const char * s1, const char * s2){
while (*s1 && (*s1 == *s2)){
s1++;
s2++;
}
return (unsigned char )*s1 - (unsigned char)*s2;
}



#if !(__has_builtin(__builtin_strncmp))
int strncmp (const char * s1, const char *s2, size_t size){
while (*s1 && (*s1 == *s2)){
	if (size == 0){
		return 1;
	}
	s1++;
	s2++;
	size--;
}

return 0;
}
#endif


char * strcat(char *restrict dst, const char *restrict src){
	while ((*dst++) != '\0'){
	// just need to advance the pointer to end of first string 
	}
	while(*dst++ = *src++){
	//nothing
	}

	return dst;
}
char * strncat(char *restrict dst, const char *restrict src, size_t size){
while (*dst++ != '\0'){
size--;
if (size == 0) return 0;
}
while (*dst++ = *src++){
size--;
if (size == 0) return 0;

}

}

#if !(__has_builtin(__builtin_strlen))
size_t strlen(const char *restrict src){
	size_t ret = 0;
	while (*src++ != '\0'){
		ret++;
	}
	return ret;
}
#endif

size_t strnlen(const char *restrict src, size_t size){
	size_t ret = 0;
	while (*src++ != '\0'){
	size--;	
	ret++;
	if (size == 0){
	return ret;
	}
	}

	return ret;

}
#define malloc(a) (NULL) // beacuse i have not made malloc yet to get rid of errors
char * strdup(const char *s){
	char * ret = malloc(strlen(s));
	if (ret == NULL){
	errno = ENOMEM;
	return NULL;
	}
	strcpy(ret, s);
	return ret;

}

char * strndup(const char *s, size_t size){
	char * ret = malloc(size);
	if (ret == NULL){
	errno = NULL;
	return NULL;
	}
	strncpy(ret, s, size);
	return ret;

}
#undef malloc
