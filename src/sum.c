#include <stdio.h>
int sum(); //dichiaro la funzione che richiamo in main

int main(){
    int x = 10, y = 20;
    int s = sum(x,y);
    printf("La somma di %d e %d è %d\n",x,y,s);
    return 0;
}

int sum(int a, int b){ //definisco i parametri ed il corpo della funzione 
    return a+b;
}