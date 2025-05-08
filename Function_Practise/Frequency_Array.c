#include<stdio.h>
void frequency_count(int a[],int N,int M){
    int array[N]; 
for (int i = 0; i < N; i++) {
    array[i] = 0; 
}
for (int i = 0; i < N; i++) {

   int value= a[i];
   if(value<=M){
    array[value]++;
   }
}

for (int i = 0; i < N; i++) {
    if(array[i]>0){
        printf("%d\n",array[i]);
    } 
}       
};
int main(){
   
    int N,M;
    scanf("%d %d",&N,&M);
    int array[N];
    for(int i=0;i<N;i++){
        scanf("%d",&array[i]);
    }
    frequency_count(array,N,M);
    return 0;

};