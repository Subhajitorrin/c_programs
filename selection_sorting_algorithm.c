#include<stdio.h>
int main(){
    int a[100],n,i,j,temp,min=0;

    //taking inputs
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //selection sorting algorithm
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j]){
                temp=a[min];
                a[min]=a[j];
                a[j]=temp;
            }
        }
    }

    //sorted output
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
return 0;
}