/*
pascal triangle
    1
   1 1
  1 2 1
 1 3 3 1 
1 4 6 4 1
*/
#include<stdio.h>
int main(){
    int i,j,n,s,c=1;
    printf("Enter nth: ");scanf("%d",&n);
    for(i=0;i<n;i++){

        //loop for spaces
        for(s=0;s<=(n-1)-i;s++){
            printf("  ");//2 spaces
        }

        //loop for pascal calculation
        for(j=0;j<=i;j++){
            if(j==0 || i==0){
                c=1;
            }
            else{
                c=(c*(i-j+1))/j; //formula for pascal calculation
            }
            printf("%4d",c);
        }
        printf("\n");
    }
return 0;
}

/*
assuming n = 5 and [i=0;i<n;i++]
i   s
0   4 spaces    0 to (n-1)-i = 4
1   3 spaces    0 to (n-1)-i = 3
2   2 spaces    0 to (n-1)-i = 2
3   1 spaces    0 to (n-1)-i = 1
4   no space    0 to (n-1)-i = terminate
*/