#include<stdio.h>
int main()
{
    int n,rim,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rim=n%10;
        rev=rev*10+rim;
        n=n/10;
    }
        {
            printf("%d",rev);
        }
}