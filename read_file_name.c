#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	char ch;
	FILE *fp;
	fp=fopen(argv[1],"r");
	while(ch != EOF){
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	
	return 0;
}
