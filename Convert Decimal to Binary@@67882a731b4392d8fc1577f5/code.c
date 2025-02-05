#include <stdio.h>

int main() {
    int num1,i=0;
    char num[10];

    scanf("%d",&num1);
    while(num1>0){
        if(num1%2==0){
            num[i]=0;
        }
        else{
            num[i]=1;
        }
        num1/=2
        i++;
    }
    num[i]='/0';
    for (int j=0;j<i;j++){
        char temp=num[j];
        num[j]=temp[i-j-1];
        num[i-j-1]=temp;
    }
    printf("%s",num);
    return 0;
}