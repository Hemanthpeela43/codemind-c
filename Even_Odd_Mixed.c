#include<stdio.h>
int main()
{
    int n,e=0,o=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(rem%2==0)
        e++;
        else
        o++;
        n=n/10;
    }
    if(e>0 && o>0)
    printf("Mixed");
    else if (e>0 || o==0)
    printf("Even");
    else 
    printf("Odd");
}