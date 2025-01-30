#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if (num1>>num2 &1==1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}