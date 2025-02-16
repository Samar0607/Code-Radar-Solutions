#include <stdio.h>

int main (){
    int num;
    scanf("%d",&num);
    for (int i=1;i<num;i++){
        for (int k=num-i;k>0;k--){
            printf(" ");
        }
        for (int j=0;j<(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}