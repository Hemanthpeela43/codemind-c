#include<stdio.h>
int main()
{
    int n,i,j,cnt,k=0,c=0;
    int arr[10000],brr[10000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cnt=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
             cnt++;
       }
       if(cnt==2)
       arr[k]=i;
       k++;
   }
   for(i=0;i<k;i++)
   {
       for(j=i+1;j<k;j++)
       {
           if(arr[i]*arr[j]==n)
           {
               printf("%d %d",arr[i],arr[j]);
               c++;
               break;
           }
       }
   }
   if(c==0)
   {
       printf("-1");
   }
}