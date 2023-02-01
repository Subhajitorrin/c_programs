/*
Bubble sorting algorithm
*/
#include<stdio.h>
int main(){
    int a[100],n,i,j,temp;

    //takin input
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //bubble sorting algorithm
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    //sorted array
    printf("Shorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
return 0;
}