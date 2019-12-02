#include<stdio.h>
#include<stdlib.h>

int check_size(char *str){
	int count=0;
	int i=0;
	while(str[i]!='\0'){
		count++;
		i++;
	}
	return count;
}

void check_string_palindrome(char *str){
	int Strsize=check_size(str);
	int ans=0;
	for(int i=0,j=Strsize-1;i<j;i++,j--){
		if(str[i]!=str[j]){
			ans=1;
			break;
		}
	}
	if(ans==0){
		printf("\nOutput:'%s' is palindrome string\n",str);
	}else{
		printf("\nOutput:'%s' is not palindrome string\n",str);
	}
	
}

int main(){

	char *str=NULL;
	str=(char *)malloc(50*sizeof(char));
	printf("Enter the string:");
	scanf(" %s",str);
	
	check_string_palindrome(str);	
	return 0;

}
