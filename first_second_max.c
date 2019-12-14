#include<stdio.h>

void find_firstandsecond_max(int [],int);

void find_firstandsecond_max(int arr[],int n)
{
    int max1=0,max2=0;

    if(arr[0]>arr[1])
    {
        max1=arr[0];
        max2=arr[1];
    }
    else
    {
        max1=arr[1];
        max2=arr[0];
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else{
            if(arr[i]>max2 && arr[i]<max1)
            {
                max2=arr[i];
            }
        }
    }
    printf("\nmax first=%d and second=%d\n",max1,max2);
}

int main()
{
    int arr[]={1,5,11,10,20,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    find_firstandsecond_max(arr,n);

    return 0;
}