#include <stdio.h>

int main (void){
    int num,c=1;
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",j);
            c^=1;
        }
        printf("\n");

    }
    return 0;
}