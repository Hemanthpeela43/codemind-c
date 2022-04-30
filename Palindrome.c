#include<stdio.h>
int main()
{
    int q,n,rem,rev=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem=q%10;
        rev=rev*10+rem;
        q=q/10;
    }
   if(rev==n)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}