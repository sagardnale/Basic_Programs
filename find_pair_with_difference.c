#include<stdio.h>

void find_pair_with_diff(int [],int,int);

void find_pair_with_diff(int arr[],int n,int d)
{   
    int p1=0,p2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int a=0;
            if(arr[i]<arr[j])
            {
                a=arr[j]-arr[i];
            }
            else
            {
                a=arr[i]-arr[j];
            }
            if(a==d){
                p1=arr[i];
                p2=arr[j];
                break;
            }
        }
    }
    if(p1==0 && p2==0)
    {
        printf("\nPair difference not found..\n");
    }
    else{
        printf("\nPair=(%d,%d)\n",p1,p2);
    }
}

int main()
{
    int arr[]={2,5,10,60,40,70};
    int n=sizeof(arr)/sizeof(arr[0]);

    find_pair_with_diff(arr,n,68);
    return 0;
}