#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(){
    int fd;
    char buf[200] = "";
    ssize_t nr;

    fd = open("./text", O_RDONLY);
    if (fd == -1) {
        /* handle error */
        fprintf(stderr, "Error when opening file:%s\n", strerror(errno));
    }
    nr = read(fd, buf, sizeof(buf));
    if (nr == -1) {
        fprintf(stderr, "Error when reading file:%s\n", strerror(errno));
    }
    printf("%s", buf);
    return 0;
}
