#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    sum+=arr[i];
    }
    printf("%d",sum);
}