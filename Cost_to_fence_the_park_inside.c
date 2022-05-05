#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ar1=a*b;
    int ar2=(a-(c+c))*(b-(c+c));
    if(ar2<=0) printf("Impossible");
    else printf("%d",(ar1-ar2)*d);
}