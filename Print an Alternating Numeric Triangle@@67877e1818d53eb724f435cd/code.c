#include <stdio.h>

int main (void){
    int num;
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        for(int j=0;j<i+1;j++){
            j%2==0 ? printf('1'):printf('0');
        }
        printf("\n");

    }
    return 0;
}