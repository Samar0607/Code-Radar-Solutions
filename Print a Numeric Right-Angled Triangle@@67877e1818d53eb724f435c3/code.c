#include <stdio.h>

int main (){
    int num;
    scanf("%d",&num);
    for (int i=2;i<num+2;i++){
        for (int j=1;j<i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}