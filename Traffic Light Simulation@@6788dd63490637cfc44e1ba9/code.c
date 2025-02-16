#include <stdio.h>

int main (){
    char c;
    scanf("%d",&c);
    switch(c){
        case 'G':printf("Go");
        break;
        case 'R':printf("Stop");
        break;
        case 'Y':printf("Slow Down");
        break;
        default:printf("Invalid input");
        break;
    }
    return 0;
}