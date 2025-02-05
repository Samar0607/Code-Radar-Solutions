#include <stdio.h>

int main() {
    int num1;
    char num[10];
    int i=0;
    scanf("%d",&num1);
    
    if (num1==0){
        printf("%d",0);
    }
    while (num1>0) 
    {
        if(num1%2==0){
            num[i]='0';
        }
        else{
            num[i]='1';
        }
        num1/=2;
        i++;
    }
    num[i]='\0';
    
    printf("%s",num);
    return 0;
}