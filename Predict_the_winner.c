#include<stdio.h>
int main()
{
    int n,i,x=0,y=0,s;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            x=x+arr[i];
        }
        else
        {
            y=y+arr[i];
        }
    }
    s=x-y;
    if(s<0)
    {
        s=-1*s;
    }
    if(s%4==0)
    printf("X");
    else
    printf("Y");
    
}