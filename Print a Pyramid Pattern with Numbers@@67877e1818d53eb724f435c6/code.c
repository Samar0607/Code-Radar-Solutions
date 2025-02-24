#include <stdio.h>

int main (void){
    int num;
    scanf("%d",&num);
    for (int i=num;i>0;i--){
        for (int j=i-1;j>0;j--){
            printf(" ");
        }
        for (int k=1;k<num-i+2;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}