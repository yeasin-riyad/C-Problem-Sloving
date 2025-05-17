#include<stdio.h>
int main(){
    int row,col,flag=0,search;
    scanf("%d %d",&row,&col);
    int array[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&array[i][j]);
        }
    }
    scanf("%d",&search);
   
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(array[i][j]==search){
                flag=1;
                printf("will not take number\n");
                break;
            }
        }
        if(flag==1) break;

    }

    if(flag==0){
        printf("will take number");
    }
    return 0;
}