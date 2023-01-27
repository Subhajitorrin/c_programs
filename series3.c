/*
    write a c program to compute the following series:
    G= 1+x^3/3! + x^5/5! + x^7/7! + .... up to n terms
*/
#include<stdio.h>
#include<math.h>
long int fact(long int n){
    if(n==0||n==1)return 1;
    else return n*fact(n-1);
}
int main(){
    long int x,n,i=1,count=1; 
    double G=0;
    printf("Enter nth term: ");
    scanf("%ld",&n);
    printf("Enter the value of x: ");
    scanf("%ld",&x);
    while(i<=n){
        G=G+(pow(x,count)/fact(count));
        i++;
        count=count+2;
    }
    printf("Sum of the series= %lf",G);
return 0;
}