#include<stdio.h>
int main()
{
    int arr[10],brr[10];
    int a=0,b=0;
    scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
     scanf("%d%d%d",&brr[0],&brr[1],&brr[2]);
     int i;
     for(i=0;i<3;i++)
     {
         if(arr[i]>brr[i])
         {
             a++;
         }
         else if(arr[i]<brr[i])
         {
             b++;
         }
     }
     printf("%d %d",a,b);
}