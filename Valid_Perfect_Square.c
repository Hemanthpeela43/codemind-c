#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,sqr;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        m=arr[i];
        sqr=sqrt(m);
        if(sqr*sqr==m)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}