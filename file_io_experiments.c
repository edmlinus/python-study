/*
 ============================================================================
 Name        : file io experiments.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c[] = "hello world?";

	FILE *firstfile = fopen("D:\\fileout\\hello.txt","w+");
	printf("sucessfully created file : %x\n",firstfile);

    fwrite(c, strlen(c), 1, firstfile);


	char content[100];
	fread(content,strlen(c)+1,1,firstfile);
	printf("text read: \n %s",content);

	fclose(firstfile);
	return 0;

}
