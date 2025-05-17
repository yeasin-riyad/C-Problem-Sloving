#include<stdio.h>
long long log2(long long int n){
 if(n==1){
    return 0;
 }
 long long result=log2(n/2);

    return result+1;

    

}
int main(){
    long long int n;
    scanf("%lld",&n);
    long long result=log2(n);
    printf("%lld",result);
    return 0;
}