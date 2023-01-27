/*

Write the pattern program given below:
*           *
* *       * *
* * *   * * *
* * * * * * *

*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=7;j++){
            if(j<=i || j>=8-i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
return 0;
}

/*
i	j	n=8							
1	j<=i || j>=n-i								
2	j<=i || j>=n-i								
3	j<=i || j>=n-i								
4	j<=i || j>=n-i								
*/