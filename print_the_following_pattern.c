#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=65;i<(65+n);i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",i);
        }
         printf("
");
    }
   
}