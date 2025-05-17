#include<stdio.h>
long long int  summation(int array[],int i,int n){ 
    if(i==n){
        return 0;
    };
    
    return array[i]+summation(array,i+1,n);
    



}
int main(){
    int n;
    long long int sum=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
     sum= summation(array,0,n);
    printf("%lld\n",sum);
    return 0;
}