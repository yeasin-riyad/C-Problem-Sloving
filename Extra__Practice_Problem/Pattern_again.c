// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
    
//     for(int i=n-1,k=1;i>=1;i--,k++){
//         for(int l=1;l<=k;l++){
//             printf(" ");
//         }
       
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        int spaces = n - i;
        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
