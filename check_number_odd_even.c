#include<stdio.h>

int main(){
	
	int num=0,ans=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("\n%d is even number\n",num);
	}else{
		printf("\n%d is odd number\n",num);
	}
	return 0;
}
