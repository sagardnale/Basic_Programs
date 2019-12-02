#include<stdio.h>
#include<stdlib.h>

void display_1_to_10(int n){
	if(n==100){
		
		printf("%d \n",n);
	}
	else{
		printf("%d ",n);
		display_1_to_10(n+1);
	}
	
}

int main(){
	int *arr;
	arr=(int *)malloc(10*sizeof(int));
	printf("Output:\n");
	display_1_to_10(1);
	
	printf("\n\n");
	
	return 0;
}
