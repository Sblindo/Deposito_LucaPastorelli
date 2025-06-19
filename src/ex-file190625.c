#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(){

    FILE *fp = fopen("/root/lpastorelli/Deposito_LucaPastorelli/bin/input.txt","r");

    if(!fp){
        perror("Errore Apertura file!");
        return EXIT_FAILURE;
    }

    int ch;
    while((ch = fgetc(fp)) != EOF){
        fputc(ch, stdout);
    }

    if(ferror(fp)){
        perror("Errore durante la lettura!");
        fclose(fp);
        return EXIT_FAILURE;
    }

    fclose(fp);
    return EXIT_SUCCESS;
}
