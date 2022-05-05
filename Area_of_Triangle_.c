#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,s,p;
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    p=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",p);
    return 0;
}