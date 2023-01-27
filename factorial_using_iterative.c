#include<stdio.h>
int main(){
    int i,n,f=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Factorial is ");
    
    if(n==0)printf("%d",1);
    else{
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("%d",f);
    }
return 0;
}