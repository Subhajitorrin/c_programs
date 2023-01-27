// 1+2/2!+3/3!+4/4!________+n/n!, where value of n is given by user....
#include<stdio.h>
int fact(int n){
    if(n==0||n==1)return 1;
    else return n*fact(n-1);
}
int main(){
    int n,i;
    float sum=0.0;
    printf("Enter nth term: ");scanf("%d",&n);
    printf("Series till %dth term: ",n);
    for(i=1;i<=n;i++){
        sum=sum+((float)i/fact(i));
    }
    printf("Sum is %f",sum);
return 0;
}
