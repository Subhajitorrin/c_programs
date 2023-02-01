/*
    Binary search algorithm
*/
#include<stdio.h>
#define SIZE 100

void selection_sort(int *a,int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(*(a+min)>(*(a+j))){
                temp=*(a+min);
                *(a+min)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
}

int binary_search(int a[],int n,int k){
    int l=0,r=n-1,m,flag=0;
    while(l<=r){
        m=(l+r)/2;
        if(a[m]==k){
            return m;
        }
        else if(k<a[m]){
            r=m-1;
        }else{
            l=m+1;
        }
    }
    return -1;
}

int main(){
    int a[SIZE],i,n,k,flag;

    //taking array input
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //taking searching element
    printf("Enter searching element: ");
    scanf("%d",&k);

    //sorting array
    selection_sort(a,n);

    //element check using binary search
    flag=binary_search(a,n,k);

    //checking flag
    if(flag>=0){
        printf("Enement Found at index %d [as sorted]",flag);
    }
    else{
        printf("Element Not Found!");
    }
return 0;
}