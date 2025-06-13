#include <stdio.h>
#include <string.h>

int main(){
    char test[10] = "testpassw\0";
    char test1[10] = "testpassw\0";

    printf("%d stampa la comparazione",strcmp(test,"testpassw"));

    return 0;
}