#include <stdio.h>

int main (void){
    int num;
    scanf("%d",&num);
    for (int i=0;i<num;i=i+2){
        if(i%2==0){
        int k=1;
        for(;k<i+2;k++){
            printf("%d ",k%2==0 ? 1:0);
        }
        printf("\n");}
        else{
        int j=0;
        for(;j<=i+2;j++){
            printf("%d ",j%2==0 ? 0:1);
        }
        printf("\n");}
    }
    return 0;
}