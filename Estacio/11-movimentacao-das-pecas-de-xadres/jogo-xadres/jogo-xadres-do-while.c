#include <stdio.h>

int main () {
    // O Bispo será representado pelo ( i ) nesse codigo.
    int i = 0;
    do{
        printf("Movimento da Bispo para diagonal = 'cima: %d - dieita: %d'\n", i, i);
        i++;
    } while (i <= 5);
    
}