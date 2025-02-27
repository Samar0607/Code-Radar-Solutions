#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",arr[i]);
    }
    scanf("%d",&b);
    int temp;
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<a;j++)
        {
            temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
}