#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
      
          //  printf("%d ",arr[i]);
    }
    //printf("
");
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i]*arr[i];
       // printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
     {
        
            if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      }
    }
    for(i=0;i<n;i++)
    {
        //arr[i]=arr[i]*arr[i];
        printf("%d ",arr[i]);
    }
}