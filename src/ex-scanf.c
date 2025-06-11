#include <stdio.h>

int main(){
    int age;
    float weight;
    char name[20];

    printf("Inserisci la tua eta:\n");
    if (scanf("%d", &age) != 1){
        printf("inpunt non valido");
        return 1;
    }

    printf("Inserisci il tuo peso:\n");
    if (scanf("%f", &weight) != 1){
        printf("inpunt non valido");
        return 1;
    }

    printf("Inserisci il tuo nome:\n");
    if (scanf("%19s", name) != 1){
        printf("inpunt non valido");
        return 1;
    }

    printf("\nQuesti sono i Dati Inseriti:\n");
    printf("Età = %d\n", age);
    printf("Peso = %f\n", weight);
    printf("Nome = %s\n", name);
}