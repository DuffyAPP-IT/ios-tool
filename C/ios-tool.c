#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if(argv[1]==0){
		printf("No Command For iOS Host\n");
		return 1;
	}
	char command[1200];
	sprintf(command,"sshpass -p alpine ssh root@127.0.0.1 -p2222");
	for (int i=1;i<argc;i++){
		sprintf(command,"%s %s",command, argv[i]);
	}
	system(command);
	return 0;
}
