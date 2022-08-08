#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,cnt;
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
 // printf("%d
",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        cnt=0;
       for(j=0;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               cnt++;
           }
       }
       if(cnt==2)
       {
           printf("%d",arr[i]);
           break;
       }
    }
}