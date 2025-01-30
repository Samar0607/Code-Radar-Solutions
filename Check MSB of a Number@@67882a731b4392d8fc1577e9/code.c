#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1;
    scanf("%d",&num1);
    if (num1>>31 &1==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}