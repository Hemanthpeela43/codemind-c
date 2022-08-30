#include<stdio.h>
    int main()
    {
        int n,c=0,max=0;
        scanf("%d",&n);
        int arr[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
           // printf("%d ",arr[i]);
        }
         for(i=0;i<n;i++)
        {
           if(arr[i]==1)
           {
               c++;
           }
           else 
           {
               if(max<c)
               {
                   max=c;
               }
               c=0;
           }
        }
        if(max>c)
        printf("%d",max);
        else
        printf("%d",c);
    }