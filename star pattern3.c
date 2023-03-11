/*
* * * * *
 # # # #
  * * *
   # #
    *
    *
   # #
  * * *
 # # # #
* * * * *

upper pattern space logic
i   j
1   0
2   1
3   2
4   3
5   4
j<=i-1
--------------------
upper star & hash logic
i   j
1   5
2   4
3   3
4   2
5   1
j<=n+1-i
--------------------
lower pattern space logic
i   j
1   4
2   3
3   2
4   1
5   0
j<=n-i
--------------------
lower star & hash logic
i   j
1   1
2   2
3   3
4   4
5   5
j<=i
*/
#include<stdio.h>
int main(){
    int i,j,n=5;
    for(i=1;i<=5;i++){
        //loop for space
        for(j=0;j<=i-1;j++){
            printf(" ");
        }
        //loop for star and hash
        for(j=1;j<=n+1-i;j++){
            if(i%2==0){
                printf("# ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    //down pattern
    for(i=1;i<=5;i++){
        //loop for space
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
        //loop for star and hash
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("# ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}