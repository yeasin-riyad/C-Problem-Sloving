#include<stdio.h>
int main(){
    int x,count_0=0,count_1=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
        if(a[i]==0){
            count_0++;
        }else{
            count_1++;
        }
    }

    printf("%d %d\n",count_0,count_1);

    
    return 0;
}