#include<stdio.h>

void check_largest_number(int a,int b,int c){
		if(a-b>0 && a-c>0){
			printf("\nOutput:%d is largest number\n",a);
		}else{
			if(b-c>0){
				printf("\nOutput:%d is largest number\n",b);
			}else{
				printf("\nOutput:%d is largest number\n",c);
			}
		}
}

int main(){
	int n1=0,n2=0,n3=0;
	
	printf("Enter the three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	check_largest_number(n1,n2,n3);
	return 0;
}
