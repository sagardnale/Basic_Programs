#include<stdio.h>

void display_floyd_triangle(){
	printf("\nOutput:\n");
		int n=1;
	for(int i=0;i<5;i++){
		
		for(int j=0;j<=i;j++){
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	printf("\n\n");
}

int main(){
	display_floyd_triangle();
	return 0;
}
