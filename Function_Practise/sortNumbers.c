#include<stdio.h>
void sort_Numbers(int a[]){
    int new_array[3];
    for (int i=0;i<3;i++){
        // Copy Main Array;
        new_array[i]=a[i];
    }
    for (int i=0;i<3;i++){
        // Swap Value
        for(int j=i+1;j<3;j++){
            if(a[i]>a[j]){
                int swap=a[i];
                a[i]=a[j];
                a[j]=swap;

            }
        }
    }
    for (int i=0;i<3;i++){
        printf("%d\n",a[i]);
    }
    printf("\n");
    for (int i=0;i<3;i++){
        printf("%d\n",new_array[i]);
    }

};
int main(){

   

    int array[3];
    for(int i=0;i<3;i++){
        scanf("%d",&array[i]);
    };
    sort_Numbers(array);

    return 0;
}