#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1,k=0;
    scanf("%d",&num1);
    while (1){
        if((num1>>k)&1==1){
            printf("%d",k);
            break;
        }
        else{
            k++;
        }
    }
    return 0;
}