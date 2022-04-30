#include<stdio.h>
int main()
{
int n,q,mul=1,rem,add=0;
scanf("%d",&n);
q=n;
while(q!=0)
{
rem=q%10;
mul=mul*rem;
add=add+rem;
q=q/10;
}
if(mul==add)
{
printf("Spy Number");
}
else
{
printf("Not Spy Number");
}
}