#include <stdio.h>

int main (void){
    int num;
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        for(int k=1;k<i+2;k++){
            printf("%d ",k%2==0 ? 0:1);
        }
        printf("\n");
        for(int j=0;j<i+1;j++){
            printf("%d ",j%2==0 ? 0:1);
        }
        printf("\n");
    }
    return 0;
}