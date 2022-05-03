#include<stdio.h>
int main()
{
   long int n,q,rev=0;
    int i,x,rem,sum=0,nsum=0,rsum=0;
    scanf("%ld%d",&n,&x);
 q=n;
  while(q!=0)
  {
      rem=q%10;
      rev=rev*10+rem;
      q=q/10;
  }
  for(i=1;i<=x;i++)
  {
      rem=n%10;
      sum=sum*10+rem;
      n=n/10;
  }
  while(sum!=0)
  {
      rem=sum%10;
      nsum=nsum*10+rem;
      sum=sum/10;
  }
  
   for(i=1;i<=x;i++)
  {
      rem=rev%10;
      rsum=rsum*10+rem;
      rev=rev/10;
  }
  if(nsum>rsum)
  printf("%d",nsum-rsum);
  else
  printf("%d",rsum-nsum);

}