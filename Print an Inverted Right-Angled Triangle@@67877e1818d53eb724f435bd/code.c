#include <stdio.h>

int main (){
    int num;
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        for (int i=num;i>=0;i--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}