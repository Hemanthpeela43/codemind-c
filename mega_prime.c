#include<stdio.h>
int main()
{
    int n,dg,c=0,c1,cn,n1,rem;
    scanf("%d",&n);
    int i,cnt=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          cnt++;  
        }
    }
    if(cnt==2)
    {
        n1=n;
        while(n1!=0)
        {
            rem=n1%10;
            c++;
            cn=0;
            for(i=1;i<=rem;i++)
            {
               if(rem%i==0)
               {
                   cn++;
               }
            }
            if(cn==2)
            {
               c1++; 
            }
            n1=n1/10;
        }
        if(c1==c)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}