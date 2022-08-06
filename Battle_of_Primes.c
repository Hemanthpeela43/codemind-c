#include<stdio.h>
int main()
{
    int n1,n2,n3,i,j,m,cnt;
    scanf("%d%d",&n1,&n2);
    //printf("%d%d",n1,n2);
    n3=n1+n2;
      for(i=1;i>=1;i++)
      {
          m=i+n3;
          cnt=0;
          for(j=1;j<=m;j++)
          {
              if(m%j==0)
              {
                  cnt++;
              }
          }
          if(cnt==2)
          {
              printf("%d",i);
              break;
          }
      }
}