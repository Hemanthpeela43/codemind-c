#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],b[10];
    int i,j,cnt,c=0,a=0,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d
",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            cnt++;
            }
        }
        if(cnt==1)
        {
           b[a++]=arr[i];
           c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        for(i=0;i<c;i++)
        {
           // printf("aa %d",b[i]);
            if(b[i]>max)
           {
               max=b[i];
           }
        }
        printf("%d",max);
    }
}