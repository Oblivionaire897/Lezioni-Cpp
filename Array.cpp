#include <stdio.h>

const int N = 11;

int main() {
    int a[N]; //Creiamo un array di dimensione N

    for (int i = 0; i < N; i++) { //Per ogni valore possibile dell'array
        a[i] = i * 5; //Riempiamo con un multiplo di 5 corrispondente all'indice dell'array
        printf("%d ", a[i]);
    }

    return 0;
}