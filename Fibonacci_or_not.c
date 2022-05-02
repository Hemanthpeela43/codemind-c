#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n)
    printf("True");
    else
    printf("False");
}