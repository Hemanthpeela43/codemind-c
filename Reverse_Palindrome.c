#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,x,s,s1,rem,sum,sum1,cnt;
    for(i=n;i>=n;i=i+sum)
    {
        x=i;
        sum=0;
        while(x!=0)
        {
           rem=x%10;
           sum=sum*10+rem;
           x=x/10;
        }
        //printf("%d
",sum);
         s1=sum+i;
         //printf("%d
",s1);
         sum1=0;
         s=s1;
         //printf("%d
",s);
         while(s!=0)
        {
           rem=s%10;
           sum1=sum1*10+rem;
           s=s/10;
        }
        //printf("%d
",sum1);
        if(s1==sum1)
        {
        	printf("%d",s1);
            break;
        }
        
    }
}