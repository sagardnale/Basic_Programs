#include<stdio.h>
#include<stdlib.h>

char* upper_to_lower(char *str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>=97 && str[i]<=122){
			str[i]=str[i]-32;
		}
		i++;
	}
	return str;
}

int main(){
	char *str;
	str=(char *)malloc(50*sizeof(char));
	if(str==NULL){
		printf("\nMemory not allocated...\n");
	}else{
		printf("Enter the string:");
		scanf("%[^\n]s",str);
		
		printf("\nOrignal String:%s\n\n",str);
		
		str=upper_to_lower(str);
		
		printf("\nAfter converting to lover:%s\n\n",str);
	}
return 0;
}
