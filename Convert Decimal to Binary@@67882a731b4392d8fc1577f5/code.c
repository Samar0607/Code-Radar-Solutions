#include <stdio.h>

int main() {
    int num1;
    char num[10];
    int i=0;
    scanf("%d",&num1);
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
    for (int j=0;j<i/2;j++){
        char temp=num[j];
        num[j]=temp[i-j-1];
        num[i-j-1]=temp;
    }
    printf("%s",num);
    return 0;
}