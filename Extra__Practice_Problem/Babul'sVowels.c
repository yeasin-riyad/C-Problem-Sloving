#include<stdio.h>

int main(){
    char letter;
    scanf("%c", &letter);

    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' )
  {
        printf("Vowel");
    } else {
        printf("Consonant");
    }

    return 0;
}
