#include <stdio.h>

int main() {
    int num1;
    char num[100];
    int i=0;
    
    scanf("%d",&num1);
    while (num1>0) 
    {
        if(num1%2==0)
        {
            num[i]='0';
        }
        else{
            num[i]='1';
        }
        i++;
        num1=num1/2;
    }
    for (int j=i ;j>=0 ;j--)
    {
        printf("%c",num[j]);
    }
    return 0;
}