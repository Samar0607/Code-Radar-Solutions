#include <stdio.h>

int main (void){
    int num;
    scanf("%d",&num);
    for (int i=num;i>0;i--){
        for (int j=0;j<i;j++){
            printf("%c ",j+65);
        }
        printf("\n");
    }
}