#include<stdio.h>
int main()
{
    int n,i,j,cnt,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cnt=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                cnt++;
            }
        }
        if(cnt==9)
        {
            c++;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",c);
}