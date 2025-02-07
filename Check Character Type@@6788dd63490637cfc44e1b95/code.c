#include <stdio.h>

int main() {
    char character;
    scanf("%c",&character);
    if (character=='a'||character=='e'||character=='i'||
    character=='o'||character=='u'||character=='A'||character=='E'
    ||character=='I'||character=='O'||character=='U')
    {
        printf("Vowel");
    }
    else if((character>='a'&&character<='z')||(character>='A'&&character<='Z')){
        printf("Consonant");
    }
    else if(character>=0&&character<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }   
    return 0;
}