#include<stdio.h>

void display_fibonacci_series(int n){
	
	printf("\nOutput:");
	int i=1,j=1,temp=0;
	
	printf("%d ",i);
	temp=j;
	while(temp<=n){
		
		printf("%d ",temp);
		temp=i+j;
		i=j;
		j=temp;
		
		
		
	}
	printf("\n\n");
}


int main(){
	int n=0;
	printf("Enter the stop point of fibonacci series:");
	scanf("%d",&n);
	
	display_fibonacci_series(n);
	
	return 0;
}
