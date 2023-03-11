/*
   *
  * *
 * * *
* * * *

for space:-
i   j
1   3
2   2
3   1
4

j<=n-i [value of n is 4]
*/
#include<stdio.h>
int main(){
    int i,j,n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" "); // one space
        }
        for(j=1;j<=i;j++){
            printf("* "); // one space after star
        }
        printf("\n");
    }
    return 0;
}
