#include<stdio.h>
int main()
{
    int L,B,W,C,AR,OAR,area,f,g,CO;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    AR=L*B;
    f=L+(2*W);
    g=B+(2*W);
    OAR=f*g;
    area=OAR-AR;
    CO=area*C;
    printf("%d",CO);
    
}