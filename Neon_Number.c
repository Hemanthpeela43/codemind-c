#include<stdio.h>
int main()
{
int n,q,rem,res=0;
scanf("%d",&n);
 q=n*n;
   while(q!=0)
 { 
  rem=q%10;
 res=res+rem;
 q=q/10;
 }
if(res==n)
{
printf("Neon Number");
}
else
{
printf("Not Neon Number");
}
}