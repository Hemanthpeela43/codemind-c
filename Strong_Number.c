#include<stdio.h>
int main()
{
    int n,a,i,rem,mul=1,sum=0;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        rem=a%10;
        mul=1;
        for(i=1;i<=rem;i++)
        {
            mul=mul*i;
        
        }
         sum=sum+mul;
        a=a/10;
    }
    if(sum==n)
    printf("The number %d is a strong number",n);
    else
    printf("The number %d is not a strong number",n);
    
}