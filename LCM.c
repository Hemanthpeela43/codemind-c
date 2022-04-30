#include<stdio.h>
int main()
{
    int n,m,lcm,r=1;
    scanf("%d%d",&n,&m);
    lcm=(n>m)?n:m;
    while(r)
    {
        if(lcm%n==0 && lcm%m==0)
        {
            printf("%d",lcm);
            r=0;
        }
        lcm++;
    }
}