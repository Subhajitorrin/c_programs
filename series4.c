// print the series till 15th term 1 2 4 7 11 16........
#include<stdio.h>
int main(){
    int i=0,sum=1,c=0,n;
    printf("Enter term: ");
    scanf("%d",&n);
    printf("Series till %dth: ",n);
    while(i<n){
        c++;
        printf("%d ",sum);
        sum=sum+c;
        i++;
    }
return 0;
}
