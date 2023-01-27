#include<stdio.h>
int main(){
    char str[100],rev[100];
    int i,len=0;
    printf("Enter string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    len--;
    for(i=0;str[i]!='\0';i++){
        rev[len]=str[i];
        len--;
    }
    rev[i]='\0';
    printf("Reversed string: %s",rev);
return 0;
}