#include<stdio.h>
#define MAXSIZE 256
int main(){
    char str[MAXSIZE];
    int count[MAXSIZE]={0},i;

    printf("Enter string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        count[str[i]]++;
    }

    for(i=0;i<256;i++){
        if(count[i]!=0){
            printf("Frequenct of %c is %d\n",i,count[i]);
        }
    }
return 0;
}