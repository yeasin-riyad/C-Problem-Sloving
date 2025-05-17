#include<stdio.h>
int LuckyDivision(int num){
    while (num>0)
    {
        
         int digit=num%10;
        
    if(digit !=4 && digit !=7){
       
        return 0; 
       
    }
    num /=10;

    }
    return 1;
};
int main(){
    int n,flag=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(LuckyDivision(i) && n%i==0){
          
            printf("YES");
            flag=1;
            break;

        }
    }
    if(flag==0){
        printf("NO");
    }
   
    return 0;
}