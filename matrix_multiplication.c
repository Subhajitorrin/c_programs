/*
    Matrix multiplication
*/
#include<stdio.h>
int main(){
    int a[30][30],b[30][30],c[30][30];
    int i,j,k,r1,r2,r3,c1,c2,c3,sum=0;

    //taking input first matrix
    printf("Enter size of first matrix row columns: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter %d elements: ",r1*c1);
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }

    //taking input second matrix
    printf("Enter size of second matrix row column: ");
    scanf("%d%d",&r2,&c2);
    printf("Enter %d elements: ",r2*c2);
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    //display first matrix
    printf("\n\nFirst matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //display second matrix
    printf("\n\nSecond matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //matrix multiplication algorithm
    if(c1!=r2){
        printf("Matrix Multiplication not possible!");
    }
    else{
        r3=r1;
        c3=c2;
        for(i=0;i<r3;i++){
            for(j=0;j<c3;j++){
                sum=0;
                for(k=0;k<c1;k++){
                    sum=sum+a[i][k]*b[k][j];
                    c[i][j]=sum;
                }
            }
        }
        //final matrix
        printf("\n\nFinal matrix:\n");
    for(i=0;i<r3;i++){
        for(j=0;j<c3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }

    
return 0;
}
