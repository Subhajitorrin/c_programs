/*

copy content of file to another file

*/
#include<stdio.h>
#include<stdlib.h>
int main(){

    //initialization
    FILE *p,*q;
    char c;

    //opening reading file
    p=fopen("a.txt","r");
    if(p==NULL){
        printf("Can't open file!\n");
        exit(1);
    }else{
        printf("Opened read file succesfully\n");
    }

    //opening writing file 
    q=fopen("b.txt","w");
    if(q!=NULL){
        printf("Write file opened succesfully\n");
    }

    //copying reading file to writing file
    while((c=fgetc(p))!=EOF){
        fputc(c,q);
    }
    fclose(p);
    fclose(q);
    printf("\n\nSuccesfully copied content and closed files");
return 0;
}

/*

Assuming first file was already created with name "a.txt"

*/