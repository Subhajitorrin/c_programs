//add three numbers using command line arguement utility
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    int a,b,c,sum;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    c=atoi(argv[3]);
    sum=a+b+c;
    printf("Sum is %d",sum);
return 0;
}