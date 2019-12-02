#include<stdio.h>

int reverse_number(int n){
	int sum=0;
	while(n!=0){
		int digit=n%10;
		sum=sum*10+digit;
		n=n/10;
	}
	return sum;
}

int main(){
	int n=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("\nBefore reverse number=%d\n",n);
	n=reverse_number(n);
	printf("\nAfter reverse number=%d\n",n);
	return 0;
}
