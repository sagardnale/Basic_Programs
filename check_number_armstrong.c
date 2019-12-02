#include<stdio.h>

int check_armstrong(int);
int calculate_digit_count(int);
int calculate_power(int,int);


int calculate_power(int d,int p){
	int sum=1;
	for(int i=0;i<p;i++){
		sum=sum*d;
	}
	return sum;
}

int calculate_digit_count(int n){
	int count=0;
	while(n!=0){
		count++;
		n=n/10;
	}
	return count;
}


int check_armstrong(int num){
	int digit_count=0,temp=0,temp2=0;
	temp=num;
	digit_count=calculate_digit_count(num);
	while(temp!=0){
		int digit=temp%10;
		temp2=temp2+calculate_power(digit,digit_count);
		temp=temp/10;
	}
	if(temp2==num){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	int n=0,ans=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	ans=check_armstrong(n);
	if(ans==0){
		printf("\n%d is armstrong number\n",n);
	}else{
		printf("\n%d is not armstrong number\n",n);
	}
	
	return 0;
	
}
