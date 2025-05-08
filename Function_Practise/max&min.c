#include<stdio.h>

void find_max_min(int a[],int n){
    int max=0;
    int min=1000000;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }            
    }

    printf("%d %d",min,max);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    find_max_min(array,n);
    return 0;
}