#include<stdio.h>

int main (){
    int num;
    scanf("%d",&num);
    c=0;
    for (int i=2;i<num;i++)
    {
       if (num%i==0){
        c++;
       } 
    }
    if (c==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}