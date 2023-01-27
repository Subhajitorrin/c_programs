#include<stdio.h>
int main(){
    char str[100];
    int i=0,vowel=0,consonant=0;
    printf("Enter string: ");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z'){
            switch(str[i]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':vowel++;break;
                default: consonant++;
            }
        }
        i++;
    }
    printf("Vowel=%d\nConsonant=%d",vowel,consonant);
return 0;
}