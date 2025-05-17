#include<stdio.h>

void seperated(int num){
    if(num==0){
        return;
    }
    seperated(num/10);
     printf("%d ",num%10);

  
 

}
int main(){
    int n,num;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&num);
        if(num==0){
            printf("%d",num);
        }
        seperated(num);
        printf("\n");
    }

    
    
    return 0;
}