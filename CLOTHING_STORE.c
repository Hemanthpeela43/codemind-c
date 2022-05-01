#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,i,j,res,cnt=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    res=0;
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
               cnt++;
        }
        res=res+cnt%2;
    }
    printf("%d",res);
}