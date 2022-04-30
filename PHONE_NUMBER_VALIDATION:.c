#include<stdio.h>
int main()
{
    long int n;
    int rem,rev,c=0;
    scanf("%ld",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        c++;
        n=n/10;
    }
    if(c==10 && rev%10!=0)
    printf("Valid");
else
    printf("Invalid");
}