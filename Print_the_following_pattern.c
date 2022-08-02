#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            for(j=1;j<=n;j++)
            {
                printf("%d ",j);
            }
            printf("
");
        }
        else
        {
            for(k=i;k<=n;k++)
            {
                printf("%d ",k);
            }
            printf("
");
        }
    }
}