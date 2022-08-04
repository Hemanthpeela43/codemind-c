#include<stdio.h>
int main()
{
    int n,x,cnt,rem,sum;
    scanf("%d",&n);
    int i,j,k;
    for(i=n+1;i>=n;i++)
    {
      cnt=0;
      for(j=1;j<=i;j++)
      {
          if(i%j==0)
          {
              cnt++;
          }
      }
      if(cnt==2)
      {
          x=i;
          sum=0;
          while(x!=0)
          {
              rem=x%10;
              sum=sum*10+rem;
              x=x/10;
          }
          if(i==sum)
          {
              printf("%d",i);
              break;
          }
      }
    }
}