#include<stdio.h>

void Get_factorial_of_number(int n){
	printf("\nOutput:");
	int i=1;
	while(i<=(n/2)){
		if(n%i==0){
			printf("%d ",i);
		}
		i++;
	}
	printf("\n\n");
}

int main(){
	int n=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	Get_factorial_of_number(n);
	
	return 0;
}
