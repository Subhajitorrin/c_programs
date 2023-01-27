#include<stdio.h>
void swap(int*,int*);
int main(){
    int a,b;
    int *p,*q;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    p=&a,q=&b;
    printf("Before Swapping: a=%d b=%d\n",a,b);
    swap(p,q);
    printf("After Swapping: a=%d b=%d",a,b);
return 0;
}
void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}