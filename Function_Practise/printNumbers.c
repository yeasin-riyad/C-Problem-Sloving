#include<stdio.h>
void printNumbers(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(i==N){
            printf("%d",i);
            break;
        }
        printf("%d ",i);
    }

}
int main(){
    
    printNumbers();
    return 0;
    
}