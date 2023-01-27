/*
In an organization, 55% of Basic salary is given as DA while HRA is 15% of basic salary.
PF is deducted at the rate of 125% of gross salary. Write a C program to calculate net salary
[Gross salary = basic + DA + HRA and net salary = gross salary - pf]
*/
#include<stdio.h>
int main(){
    float bs,gs,ns,da,hra,pf;
    printf("Enter Basic salary: ");scanf("%f",&bs);
    da=bs*0.55;
    hra=bs*0.15;
    gs=bs+da+hra;
    pf=gs*0.125;
    ns=gs-pf;
    printf("Net Salary is %f",ns);
return 0;
}