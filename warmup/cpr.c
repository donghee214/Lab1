#include "common.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/* make sure to use syserror() when a system call fails. see common.h */

void
usage()
{
	fprintf(stderr, "Usage: cpr srcdir dstdir\n");
	exit(1);
}

int
main(int argc, char *argv[])
{
	if (argc != 3) {
		usage();
	}
        char* copyPath = argv[1];
        char* destPath = argv[2];
        int copyFile, destFile;
        copyFile = open(copyPath, O_RDONLY);
        destFile = open(destPath, O_RDWR|O_CREAT, 0666);
        char buf[4096];
        
        int ret = read(copyFile, buf, 4096);
        printf(buf);
        write(destFile,buf, 4096);
	return ret;
}
