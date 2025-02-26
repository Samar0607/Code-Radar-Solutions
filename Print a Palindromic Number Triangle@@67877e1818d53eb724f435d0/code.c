#include <stdio.h>

int main (void){
    int num,n;
    scanf("%d",&num);
    n=num;
    for(int i;i<num;i++){
        for (int k;k<n;k++){
            printf(" ");
        }
        for(int j=1;j<i+2;j++){
            printf("%d",j);
        }
        printf("\n");

    }
    return 0;
}
