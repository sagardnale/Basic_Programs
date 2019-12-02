#include<stdio.h>

int check_prime(int p){
	int c=0;
		if(p==1){
			return 1;
		}
		else{
		for(int i=2;i<=(p/2);i++){
			if(p%i==0){
				c++;
			}
		}
		}
		return c;
	}


void find_prime_factor(int num){
	int i=1;
	printf("\nOutput:Prime factors if %d=",num);
	while(i<=(num/2)){
		if(num%i==0){
			int ans=check_prime(i);
			if(ans==0){
				printf("%d ",i);
			}
		}
		i++;
	}
	printf("\n\n");
}

int main(){
	int num=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	find_prime_factor(num);
	return 0;
}
