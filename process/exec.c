#include <sys/types.h>
#include <unistd.h>

int main(){
	int ret;
	ret = execl ("/usr/bin/vi", "vi", NULL); 
	if (ret == -1){
		perror ("execl");
	}
	return 0;
}

