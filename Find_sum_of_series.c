#include<stdio.h>
int main()
{
    int n;
    float i,sum=0,res;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res=1/i;
        sum=sum+res;
    }
    printf("%.2f",sum);
}