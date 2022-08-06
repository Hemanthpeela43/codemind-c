#include<stdio.h>
int main()
{
    int n,n1;
    scanf("%d",&n);
    scanf("%d",&n1);
    int i,j,cnt;
    for(i=n;i<=n1;i++)
    {
        cnt=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                cnt++;
            }
        }
        if(cnt==2)
        {
            printf("%d
",i);
        }
    }
}