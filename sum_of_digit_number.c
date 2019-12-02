#include<stdio.h>

int sum_of_digit(int a){
	int sum=0;
	while(a!=0){
		sum=sum+(a%10);
		a=a/10;
	}
	return sum;
}

int main(){
	int n=0,ans=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	ans=sum_of_digit(n);
	printf("\nOutput:%d digit sum=%d\n",n,ans);
	return 0;
}
