#include <stdio.h>

int main() {
    int num1,bit;
    scanf("%d %d",&num1,&bit);
    printf("%d",num1^(1<<bit));
    return 0;
}