#include<stdio.h>
int main()
{
    int n,i,rem,rev;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        rev=0;
        int m=arr[i];
        while(arr[i]!=0)
        {
            rev=rev*10+arr[i]%10;
            arr[i]=arr[i]/10;
        }
        if(rev==m)
            printf("True
");
            else
            printf("False
");
    }
}