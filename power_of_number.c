#include<stdio.h>

int make_power(int n,int p){
	int sum=1;
	while(p!=0){
		sum=sum*n;
		p--;
	}
	return sum;
}

int main(){
	int num=0,pow=0,ans=0;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	printf("Enter Power to make number:");
	scanf("%d",&pow);
	
	ans=make_power(num,pow);
	printf("\nOutput:%d power of %d=%d\n",num,pow,ans);
	
	return 0;
}
