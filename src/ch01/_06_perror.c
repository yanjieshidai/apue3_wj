#include<apue.h>
#include<errno.h>

int main(int argc, char *argv[]){
	
	fprintf(stderr,"EACCES:%s\n",strerror(EACCES));
	
	fprintf(stderr,"ENOENT:%s\n",strerror(ENOENT));
	errno = ENOENT;
	perror(argv[0]);
	errno = EACCES;
	perror(argv[0]);
	exit(0);
}

