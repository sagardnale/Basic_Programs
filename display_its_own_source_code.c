#include<stdio.h>

int main(){
	FILE *fp;
	char c;
	fp = fopen(__FILE__,"r");
	while(c != EOF){
	 c=fgetc(fp);
	 putchar(c);
	}
	//while(c != EOF);
	fclose(fp);
	return 0;
}
