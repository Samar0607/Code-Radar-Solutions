#include <stdio.h>

int main (){
    int num;
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        for (int k=num-i;k>0;k--){
            printf(" ");
        }
        for (int j=0;j<(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=num-1;i>0;i--){
        for (int k=1;k<num-i+1;k++){
            printf(" ");
        }
        for (int j=0;j<(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}