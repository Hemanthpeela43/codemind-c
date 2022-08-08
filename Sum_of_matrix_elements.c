#include<stdio.h>
int main()
{
    int col,row,i,j,sum=0;
    scanf("%d%d",&col,&row);
    //printf("%d %d",col,row);
    int arr[col][row];
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
        scanf("%d",&arr[i][j]);
        //printf("%d ",arr[i][j]);
        sum=sum+arr[i][j];
        }
        // printf("
");
    }
    printf("%d",sum);
}