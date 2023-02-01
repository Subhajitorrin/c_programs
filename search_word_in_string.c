/*
    Search the word in string
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100],s[100];
    int i,j,count=0,index;
    printf("Enter main string: ");gets(str);
    printf("Enter sub string: ");gets(s);

    for(i=0;str[i]!='\0';i++){
        index=i;
        for(j=0;j<strlen(s);j++){
            if(str[i]==s[j]){
                count++;
                i++;
            }
        }

        if(count==strlen(s)){
            printf("Word found at index %d",index);exit(1);
        }
        else{
            count=0;
        }
    }
    printf("Word not found!");
return 0;
}