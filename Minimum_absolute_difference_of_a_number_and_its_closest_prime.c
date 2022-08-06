#include<stdio.h>
int main()
{
    int n,c1,c2;
    int s1,s2;
    scanf("%d",&n);
    //printf("%d
",n);
    int i,j;
    for(i=n;i>=n;i++)
    {
        c1=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c1++;
            }
        }
        if(c1==2)
        {
            //printf("%d
",i);
            s1=i-n;
          //  printf("%d",s1);
            break;
        }
    }
    for(i=n;i>0;i--)
    {
        c1=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c1++;
            }
        }
        if(c1==2)
        {
            //printf("%d
",i);
            s2=n-i;
            //printf("%d",s2);
            break;
        }
    }
    if(s1<s2)
    {
        printf("%d",s1);
    }
    else
    {
        printf("%d",s2);
    }
}