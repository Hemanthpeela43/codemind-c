#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    int cnt,max,temp=0;
    max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
       // printf("%d",max);
    }
    for(i=1;i<=max;i++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]%i==0)
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
           temp=i; 
        }
    }
    printf("%d",temp);
}