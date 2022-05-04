#include<stdio.h>
int main()
{
    int n,m,i,f;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
      for(i=0;i<n;i++)
      {
            m=arr[i];
         f=1;
        while(m!=0)
        {
            f=f*m;
            m--;
            
        }
        printf("%d
",f);
      }
}