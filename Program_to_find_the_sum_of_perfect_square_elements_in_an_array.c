#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqr,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sqr=sqrt(arr[i]);
          if(sqr*sqr==arr[i])
          {
              sum=sum+arr[i];
          }
        
    }
    printf("%d",sum);
    
}