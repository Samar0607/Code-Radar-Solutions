#include <stdio.h>

int main (void){
    int num;
    scanf ("%d",&num);
    for(int i;i<num;i++){
        for (int k=0;k<i+1;k++){
            printf(" ");
        }
        for (int j=1;j<=i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}