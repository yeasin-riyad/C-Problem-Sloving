#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,primary_diagonal_sum=0,secondery_diagonal_sum=0;
    scanf("%d",&n);
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        primary_diagonal_sum+=array[i][i];
        secondery_diagonal_sum+=array[i][n-i-1];
    }
    printf("%d\n",abs(primary_diagonal_sum-secondery_diagonal_sum));
    return 0;
}