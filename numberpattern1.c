/*print the number pattern
                    1
                2   3
            4   5   6
        7   8   9  10
   11  12  13  14  15
*/
#include<stdio.h>
int main(){
    int i,j,n=1;
    for(i=1;i<6;i++){
        if(i>=1&&i<=4){
            for(j=1;j<=5-i;j++){
                printf("\t");
            }
        }
        for(j=1;j<=i;j++){
            printf("%d\t",n);
            n++;
        }
        printf("\n");
    }
return 0;
}