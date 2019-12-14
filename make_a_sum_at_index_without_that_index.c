#include<stdio.h>

void display_array(int [],int);
int* operation(int *,int);
int make_sum(int *,int);

int make_sum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int* operation(int *arr,int n)
{
    int sum=make_sum(arr,n);
    for(int i=0;i<n;i++)
    {
        arr[i]=sum-arr[i];
    }
    return arr;
}
void display_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}

int main()
{
    int arr[]={1,3,5,2,10,20,30};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Orignal Array:");
    display_array(arr,n);
    
    printf("After operation:");
    operation(arr,n);
    display_array(arr,n);
    return 0;
}