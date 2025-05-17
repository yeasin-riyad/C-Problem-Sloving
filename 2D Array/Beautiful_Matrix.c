#include<stdio.h>
#include<stdlib.h>
int main(){
    int row_move=0,col_move=0;
    int array[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(array[i][j]==1){
                row_move=abs(2-i);
                col_move=abs(2-j);
                break;
            }
        }
    }

    printf("%d",row_move+col_move);
    return 0;
}