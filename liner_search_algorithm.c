/*

    Liner search algorithm

*/
#include<stdio.h>
int main(){
    int a[100],n,i,k,flag=0;

    //taking input
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter searching element: ");
    scanf("%d",&k);

    //liner search algorithm
    for(i=0;i<n;i++){
        if(a[i]==k){
            flag=1;
            break;
        }
    }

    //checking flag
    if(flag){
        printf("Element found at position %d",i);
    }
    else{
        printf("Element not found!");
    }
return 0;
}