#include<stdio.h>
void shift_zeros(int a[],int n){
    for(int i=0;i<n-i;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]==0){
            int swap=a[j+1];
            a[j+1]=0;
            a[j]=swap;
        }
        }
    }

}
int main(){
     int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    };
    shift_zeros(array,n);
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    };
    return 0;
}