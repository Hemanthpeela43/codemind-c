#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,cnt,c=1;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    cnt++;
                }
            }
            if(cnt>2)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}