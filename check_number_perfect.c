/*
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
Example:
Input:6
divisors:1+2+3=6
Output:True
*/

#include<stdio.h>
#include<stdlib.h>

int check_number_perfect(int *n){
	int sum=0,num=0;
	num=*n;
	for(int i=1;i<=(num/2);i++){
		if(*n%i==0){
			sum=sum+i;
		}
	
	}
	if(sum==*n){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int *n=NULL;
	int ans=0;
	n=(int *)malloc(sizeof(int));
	if(n==NULL){
		printf("\nMomory not allocated\n");
	}else{
		printf("Enter the number:");
		scanf("%d",n);
	}
	
	ans=check_number_perfect(n);
	printf("Output:");
	if(ans==1){
		printf("\n%d is perfect number\n",*n);
	}else{
		printf("\n%d is not perfect number\n",*n);
	}
	
	
	return 0;
}
