#include<stdio.h>
void Front_End(int a[],int front,int end,int n){
  
    if(front==n/2 && n%2==0){
        return ;
    }

    if(front != end){
        
        printf("%d ",a[front]);
        printf("%d ",a[end]);
    }else{
        printf("%d ",a[front]);

    }
    if(front==n/2 && n%2!=0){
        return ;
    }
    

    Front_End(a,front+1,end-1,n);
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    Front_End(array,0,n-1,n);

    return 0;
}