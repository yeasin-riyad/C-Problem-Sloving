#include<stdio.h>
void Factorial(int num){
    long long int fact=1;
    for (int i=num;i>=1;i--){
        fact*=i;
    };
    printf("%lld\n",fact);

}
int main(){
    int n;
    scanf("%d",&n);
    Factorial(n);
    return 0;
}