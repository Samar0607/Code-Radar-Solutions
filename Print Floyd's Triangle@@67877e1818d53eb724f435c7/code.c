#include <stdio.h>

int main (void){
    int num,c=0;
    scanf("%d",&num);
    for(int i;i<num;i++){
        for(int j;j<i+1;j++){
            ++c;
            printf("%d ",c);
        }
        printf("\n");
    }
}