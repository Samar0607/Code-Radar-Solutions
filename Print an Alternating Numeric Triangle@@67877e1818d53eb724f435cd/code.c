#include <stdio.h>

int main (void){
    int num;
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",j%2==0 ? 1:0);
        }
        printf("\n");

    }
    return 0;
}