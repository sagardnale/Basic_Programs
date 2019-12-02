#include<stdio.h>

void swap_numbers(int* n1,int* n2){
	*n1=*n1+*n2;
	*n2=*n1-*n2;
	*n1=*n1-*n2;
}

int main(){
	int num1=0,num2=0;
	printf("Enter the two numbers:");
	scanf("%d%d",&num1,&num2);
	
	printf("\nBefore swap num1=%d and num2=%d\n",num1,num2);
	
	swap_numbers(&num1,&num2);
	printf("\nAfter swap num1=%d and num2=%d\n",num1,num2);
	
}
