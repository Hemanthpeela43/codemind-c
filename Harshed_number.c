#include<stdio.h>
int main()
{
    int n,q,rem,sum=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem=q%10;
        sum=sum+rem;
        q=q/10;
    }
    if(n%sum==0)
    printf("True");
    else
    printf("False");
}