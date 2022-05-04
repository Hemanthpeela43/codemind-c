#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,cnt=0,c=0;
    scanf("%d%d",&n,&m);
    if(n==1)
    n=2;
    for(i=n;i<=m;i++)
    {
        cnt=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            cnt++;
        }
        if(cnt == 0)
        c++;
    }
    printf("%d",c);
}