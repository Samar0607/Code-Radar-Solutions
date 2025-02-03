#include <stdio.h>

int main() {
    int num1;
    scanf("%d",&num1);
    for (int i;i<sizeof(num1)*8;i++){
        if (num1>>i&1==1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}