#include<stdio.h>
int main()
{
    int n,q,a,rem,srem,rev=0,rev1=0,sum=0,sq,revsq;
    scanf("%d",&n);
    sq=n*n;
    //n=144 here
    q=n;
    //q=12
    while(q!=0)
    {
        rem=q%10;
        rev=rev*10+rem;
        q=q/10;
    }
    revsq=rev*rev;
    a=revsq;
    while(a!=0)
    {
        srem=a%10;
        rev1=rev1*10+srem;
        a=a/10;
    }
    if(sq==rev1)
    printf("True");
    else
    printf("False");
    
}