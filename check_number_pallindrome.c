#include<stdio.h>

int check_pallindrome(int);
int reverse_number(int);

int reverse_number(int n){
	int num=0;
	while(n!=0){
		int digit=n%10;
		num=num*10+digit;
		n=n/10;
	}
	return num;
}


int check_pallindrome(int n){
	int rev_num=0;
	rev_num=reverse_number(n);
	if(rev_num==n){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	int num=0,ans=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	ans=check_pallindrome(num);
	if(ans==0){
		printf("\n%d is pallindrome number\n",num);
	}else{
		printf("\n%d is not pallindrome number\n",num);
	}
	
	return 0;
}
