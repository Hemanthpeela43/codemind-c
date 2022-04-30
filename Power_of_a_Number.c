#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,p,ma;
    scanf("%d%d%d",&x,&y,&m);
    p=pow(x,y);
    ma=p%m;
    printf("%d",ma);
    
}