#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int a[num];
    int max=0;
    for(int i=0;i<num;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<num;i++){
        if(max>a[i]){
            a[i]=max-a[i];

        }else{
            a[i]=0;

        }
        printf("%d ",a[i]);

        
    }

   
    return 0;
}