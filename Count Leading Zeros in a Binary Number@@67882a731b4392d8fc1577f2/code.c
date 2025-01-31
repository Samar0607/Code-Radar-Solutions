#include <stdio.h>

int main() {
    int num1,k=0,counte=0;
    scanf("%d",&num1);
    while (k<32){
        if ((num1>>k)&1==0){
            counte++;
        }
        k++;
    }
    printf("%d",counter);
    return 0;
}