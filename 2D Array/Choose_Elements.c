#include<stdio.h>
int main(){
    int n,k;
    long long int sum=0;
    scanf("%d %d",&n,&k);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    };
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]>array[i]){
                int swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
        }
    }
      for(int i=0;i<k && array[i]>0 ;i++){
        sum+=array[i];
    };
    printf("%lld",(long long int)sum);
    return 0;
}