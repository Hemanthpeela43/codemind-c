#include<stdio.h>
int main()
{
    int a,b,n,i,res;
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        res=a+b;
        a=b;
        b=res;
    }
    
}