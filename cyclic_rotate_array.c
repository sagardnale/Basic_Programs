/*
Input: arr[]={1,2,3,4,5};
Ouput: arr[]={5,1,2,3,4};
*/

#include<stdio.h>

void display_array(int [],int);
int* cyclic_array_rotate(int [],int);


int* cyclic_array_rotate(int arr[],int n)
{
    int x=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    return arr;
}
void display_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Orignal Array:");
    display_array(arr,n);

    cyclic_array_rotate(arr,n);
    printf("\nAfter cyclic rotation:");
    display_array(arr,n);
    return 0;
}