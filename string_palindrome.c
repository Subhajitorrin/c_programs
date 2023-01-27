#include<stdio.h>
int len(char *str){
    int i=0,count=0;
    while(*(str+i)!='\0'){
        count++;
        i++;
    }
    return count;
}
int main(){
    char str[100];
    int length,i,flag=1;
    //taking input
    printf("Enter string: ");
    gets(str);

    //length of the string
    length=len(str);
    
    //checking palindrome
    for(i=0;i<length;i++){
        if(str[i]!=str[length-i-1]){
            flag=0;
        }
    }

    if(flag){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
return 0;
}