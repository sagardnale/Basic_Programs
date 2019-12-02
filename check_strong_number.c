#include<stdio.h>

int check_strong_number(int);
int calculate_fact(int);


int calculate_fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return (n*calculate_fact(n-1));
	}
}

int check_strong_number(int n){
	int sum=0,temp1=0;
	temp1=n;
	while(temp1!=0){
		int digit=temp1%10;
		sum=sum+calculate_fact(digit);
		temp1=temp1/10;
	}
	
	if(sum==n){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	int num=0,ans=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	ans=check_strong_number(num);
	if(ans==0){
		printf("\n%d is strong number..\n",num);
	}
	else{
		printf("\n%d is not strong number..\n",num);
	}
	return 0;
}
