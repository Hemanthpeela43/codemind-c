#include<stdio.h>
int main()
{
    int n,k,i,b,max=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        b=arr[i]+k;
        if(b>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}