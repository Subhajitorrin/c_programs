#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("Enter string: ");gets(str);
    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
        i++;
    }
    str[i]='\0';
    printf("UPPER CASE: %s",str);
return 0;
}