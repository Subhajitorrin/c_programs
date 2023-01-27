//convert binary to decimal
#include<stdio.h>
#include<math.h>
int main(){
    int n,deci=0,place=0;
    printf("Enter binary number: ");
    scanf("%d",&n);
    while(n!=0){
        if(n%10 == 1){
            deci=deci+pow(2,place);
        }
        place++;
        n=n/10;
    }
    printf("Decimal is: %d",deci);
return 0;
}