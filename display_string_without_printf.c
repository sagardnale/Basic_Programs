#include<stdio.h>
#include<stdlib.h>

int main(){
	char *str=NULL;
	str=(char *)malloc(100*sizeof(char));
	
	printf("Enter the string:");
	scanf("%[^\n]s",str);
	
	if(printf("string with if:%s\n",str))
	
	while(printf("string with while:%s\n",str))
return 0;
}
