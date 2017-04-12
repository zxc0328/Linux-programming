#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

pid_t getpid (void);
pid_t getppid (void);

int main(){
	printf("My pid=%d\n", (int)getpid());
	printf("Parent's pid=%d\n", (int)getppid());
	return 0;
}

