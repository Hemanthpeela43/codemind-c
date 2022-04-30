#include<stdio.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
        cnt++;
        }
    }
    if(cnt<=2)
    printf("YES");
    else
    printf("NO");
}