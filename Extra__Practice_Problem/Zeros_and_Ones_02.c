#include<stdio.h>
int main(){
    int x,position;
    scanf("%d",&x);
    int a[x+1];
    for(int i=1;i<=x;i++){
        scanf("%d",&a[i]);    
    }
   
    scanf("%d",&position);
   
    a[position]=!a[position];
    
 for(int i=1;i<=x;i++){
        printf("%d ",a[i]);
    }

    
    return 0;
}