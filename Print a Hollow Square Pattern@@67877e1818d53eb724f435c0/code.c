#include <stdio.h>

void solid(int n);
int main ()
{
    int num;
    scanf ("%d",&num);
    solid(num);
    if(num>2){
    for (int i=0;i<num;i++)
    {
        if (i==0||i==num-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
    }
    solid(num);
    return 0;
}
void solid(int n){
    for (int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
}