#include<stdio.h>
int find_max(int a[],int i,int n){

    if(i==n){
        return -1000000000;
    }
   int value= find_max(a,i+1,n);
   if(a[i]>value){
    return a[i];
   }else{
    return value;
   }


}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int max=find_max(array,0,n);
    printf("%d",max);
    return 0;
}