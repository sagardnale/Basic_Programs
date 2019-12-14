#include<stdio.h>
#include<stdlib.h>

int* take_array_element(int *,int);
void display_array(int *,int);
int linear_search(int *,int,int);


int linear_search(int *arr,int n,int s)
{
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            return i;
            break;
        }
    }
    return 0;
}

void display_array(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int* take_array_element(int *arr,int n)
{
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;
}

int main()
{
    printf("Linear Search...\n");
    int n=0;
    int *arr=NULL;
    int search_element=0;
    printf("How many arry elements:");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory error...\n");
    }
    else
    {
        take_array_element(arr,n);

        display_array(arr,n);

        printf("Enter the serach element:");
        scanf("%d",&search_element);

        int ans=linear_search(arr,n,search_element);
        if(ans==0)
        {
            printf("\n%d is not in array\n",search_element);
        }
        else
        {
            printf("\n%d is found at %d index in array\n",search_element,ans);
        }
    }
}