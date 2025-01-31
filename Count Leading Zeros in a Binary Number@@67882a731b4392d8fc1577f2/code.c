#include <stdio.h>

int main() {
    int num1,count=0;
    scanf("%d", &num1);
    
    for(int i = 0; i<sizeof(num1)*8; i++)
    {
        if (((num1>>i) & 1)==0){
            counte++;
        }
    }
    printf("%d",count);
    return 0;
}