#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int arr[n];
    int brr[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
         //   printf("%d ",arr[j]);
        }
        //printf("
");
         for(j=0;j<n;j++)
        {
            scanf("%d",&brr[j]);
         //   printf("%d ",brr[j]);
        }
        //printf("
");
          for(j=0;j<n;j++)
        {
            printf("%d ",arr[j]+brr[j]);
        }
}