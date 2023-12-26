#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fp;
    char ch,c;
    fp = fopen("Firstfile.txt","w");
    if(fp == NULL)
    {
        puts("Problem in creating file");
        exit(-1);
    }
    else
    {puts("file created");
    }
    ch= getchar();
    
    putc(ch,fp);
    
    fclose(fp);
    fp =fopen("Fisrtfile.txt","r");
    c = getc(fp);
    putc(c,fp);
}

    
