#include<stdio.h>
void check_vowels(char str[]){

    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    printf("%d",count);

}
int main(){
    char str[200];
    fgets(str,200,stdin);
    check_vowels(str);
    return 0;
}