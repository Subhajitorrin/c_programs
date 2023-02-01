/*
    Print the transpose of a matrix
*/
#include<stdio.h>
int main(){
    int a[30][30],tp[30][30],i,j,r,c;

    //taking input
    printf("Enter row and column size: ");
    scanf("%d%d",&r,&c);
    printf("Enter %d elements: ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    //transpose algorithm
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            tp[i][j]=a[j][i];
        }
    }

    //dispaly normal matrix
    printf("Normal matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //display transposed matrix
    printf("\n\nTransposed matrix:\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",tp[i][j]);
        }
        printf("\n");
    }
return 0;
}