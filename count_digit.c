#include<stdio.h>

void count_digit(int n){
	int c=0;
	while(n!=0){
		c++;
		n=n/10;
	}
	printf("\nOutput=digit count=%d\n",c);
}

int main(){
	int n=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	count_digit(n);
	return 0;
}
