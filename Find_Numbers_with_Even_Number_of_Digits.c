#include<stdio.h>
int main()
{
    int n,rem,rev,cnt,c=0,x;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        cnt=0;
        x=arr[i];
        while(x!=0)
      {
          x=x/10;
          cnt++;
      }
     if(cnt%2==0)
    {
        c++;
    }
    }
    printf("%d",c);
    
}