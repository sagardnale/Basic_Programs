#include<stdio.h>
	
void split_number_in_digit(int n){
	printf("\nOutput:%d=",n);
	while(n!=0){
		printf("%d ",(n%10));
		n=n/10;
	}
	printf("\n\n");
}


int main(){
	int n=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	split_number_in_digit(n);
	
	return 0;
}
