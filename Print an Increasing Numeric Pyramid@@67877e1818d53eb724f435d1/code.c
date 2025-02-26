#include <stdio.h>

int main (void){
    int num,n;
    n=num;
    scanf ("%d",&num);
    for(int i;i<num;i++){
        for (int k=1;k<n;k++){
            printf(" ");
        }
        for (int j=1;j<=i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
        n--;
    }
    return 0;
}