#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    int ev=0,odd=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d
",arr[i]);
        if(arr[i]%2==0)
        {
            ev++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d",ev,odd);
}