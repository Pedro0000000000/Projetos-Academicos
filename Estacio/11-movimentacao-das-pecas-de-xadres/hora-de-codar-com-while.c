#include <stdio.h> 

int  main() {

    int i = 0;

    while (i <= 10) {

        if (i % 2 == 0) {
            printf("O numero %d é par!\n", i);
        } else {
            printf("O numero %d é impar!\n", i);
        }

        i++;
    }
   
    
}