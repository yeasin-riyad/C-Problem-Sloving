#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int array[n];
   
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    };
     int min=array[0];
    for(int i=1;i<n;i++){
        if(min>array[i]){
            min=array[i];
        }

    }
    for(int i=0;i<n;i++){
        if(array[i]==min){
            count++;
        }
    }
    if(count%2==0){
        printf("Unlucky");
    }else{
        printf("Lucky");
    }
    return 0;
}