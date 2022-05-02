#include<stdio.h>
int main()
{
    int n,a,d,rem,r,cnt=0;
    scanf("%d",&n);
    for(d=0;d<=9;d++)
    {
        a=n;
        r=0;
        while(a!=0)
        {
            rem=a%10;
            if(rem==d)
            {
                r++;
            }
            a=a/10;
        }
        if(r>1)
        cnt++;
    }
    if(cnt==0)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}