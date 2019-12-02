#include<stdio.h>

int addition_of_two_numbers(int x,int y){
	if(y==0){
		return x;
	}else{
		while(y!=0){
			int carry=x & y;
			x=x ^ y;
			y=carry << 1;
			
		}
		return x;
	}
}

int main(){
	int a=0,b=0;
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	
	int ans=addition_of_two_numbers(a,b);
	printf("\nOutput:Addition of %d and %d without airthmetic operator=%d\n",a,b,ans);
	
	return 0;
}
