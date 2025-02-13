#include <stdio.h>

int main (){
    int age,status;
    scanf("%d %d",&age,&status);
    if (status==1&&age>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}