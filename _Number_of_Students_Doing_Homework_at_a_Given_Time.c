#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
   // printf("f=%d",n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       // printf("arr %d ",arr[i]);
    }
    int m;
      scanf("%d",&m);
  //  printf("f=%d",m);
   int brr[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&brr[i]);
        //printf("arr %d ",brr[i]);
    }
    int t;
    scanf("%d",&t);
   // printf("t=%d",t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t && brr[i]>=t )
     {
         c++;
     }
    }
    printf("%d",c);
     
}