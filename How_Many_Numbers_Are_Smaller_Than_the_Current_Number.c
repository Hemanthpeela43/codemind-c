#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j,cnt;
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
            if(arr[i]>arr[j])
            cnt++;
        }
        printf("%d ",cnt);
    }
}