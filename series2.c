// 1+(1+2)+(1+2+3)+______ till nth term....
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter nth term: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum is %d",sum);
return 0;
}