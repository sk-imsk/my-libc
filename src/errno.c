static int __local_errno;

int *__errno_loc(void){
	return &__local_errno;
}
