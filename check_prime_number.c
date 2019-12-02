#include<stdio.h>

int check_prime(int);

int check_prime(int n){
	int flag=1;
	if(n==1){
		return 1;
	}
	else{
	for(int i=2;i<=(n/2);i++){
		if(n%i==0){
			return 1;
			break;
		}		
	}
	
	return 0;
	
	}
	
}

int main(){
	int num=0,ans=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	ans=check_prime(num);
	if(ans==0){
		printf("\n%d is prime number\n",num);
	}else{
		printf("\n%d is not prime number\n",num);
	}
	
	return 0;
}
