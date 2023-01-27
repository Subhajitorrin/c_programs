//krishna murty check 145= 1!+4!+5!= 1+24+120= 145
#include<stdio.h>
int fact(int n){
    if(n==0||n==1)return 1;
    else return n*fact(n-1);
}
int main(){
    int n,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        sum=sum+fact(n%10);
        n=n/10;
    }
    if(temp==sum){
        printf("%d is Krishna Murty number",temp);
    }
    else{
        printf("%d is Not Krishna Murty number",temp);
    }
return 0;
}