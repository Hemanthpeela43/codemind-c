#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   // printf("%d
",n);
    int arr[n],i,j,k,cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       // printf("a=%d
",arr[i]);
    }
      scanf("%d",&k);
      //printf("%d
",k);
      for(i=0;i<n;i++)
      {
          if(arr[i]==k)
          {
              printf("%d",i);
              cnt++;
              break;
          }
      }
      if(cnt==0)
      {
          printf("-1");
      }
}