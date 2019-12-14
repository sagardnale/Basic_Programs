#include<stdio.h>

void array_rotation(int [],int,int);
void display_array(int [],int);


void display_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}

void array_rotation(int arr[],int n,int d)
{
    
    for(int j=0;j<d;j++)
    {
    for(int i=0;i<n-1;i++)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    }
    display_array(arr,n);
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int len=sizeof(arr)/sizeof(arr[0]);

    printf("Input array:");
    display_array(arr,len);
    
    printf("After rotation array:");
    array_rotation(arr,len,2);

    return 0;
}