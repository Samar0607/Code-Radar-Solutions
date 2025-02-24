#include <stdio.h>

int main (void){
    int num;
    scanf("%d",&num);
    for (int i;i<num;i++){
        for (int j=i-1;j>0;j--){
            printf(" ");
        }
        for (int k=1;k<i+1;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}