#include<stdio.h>

void find_largest(int a,int b,int c){
	if(a>b && a>c){
		printf("\nOutput:%d is largest\n",a);
	}else{
		if(b>c){
			printf("\nOutput:%d is largest\n",b);
		}else{
			printf("\nOutput:%d is largest\n",c);
		}
	}
}

int main(){
	int num1,num2,num3;
	printf("Enter the three numbers:");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	find_largest(num1,num2,num3);
	
	return 0;
}
