#include <stdio.h>

int main (void) {
    int num;
    scanf("%d",&num);
    for (int i=num;i>0;i--){
        for (int j;j<i+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;

}