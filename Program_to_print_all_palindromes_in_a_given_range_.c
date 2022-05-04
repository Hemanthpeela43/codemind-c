#include<stdio.h>
int main()
{
    int n,a,m,i,rem,rev=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        rev=0;
        a=i;
        while(a!=0)
        {
            rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }
        if(rev==i)
        {
            printf("%d ",rev);
        }
    }
}