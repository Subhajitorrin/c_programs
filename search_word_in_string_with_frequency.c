/*
    Search the word in string
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100],s[100];
    int i,j,count=0,index,freq=0;
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
            // printf("Word found at index %d",index);exit(1);
            freq++;
            count=0;
        }
        else{
            count=0;
        }
    }

    if(freq){
        printf("Word is Found and Frequency of ""%s"" is %d",s,freq);
    }
    else{
        printf("Element not found!");
    }
return 0;
}