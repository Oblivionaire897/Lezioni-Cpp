#include <stdio.h>

const int N = 11; //N è la dimensione del nostro array

int main() {
    int a[N]; //Dichiariamo un array di N valori 
    int x;

//Riempimento dell'array

    for (int i = 0; i < N; i++) { //Ciclo for per ogni "blocco" dell'array
        printf("Inserisci il valore numero %d dell'array: ", i + 1);
        scanf("%d", &x);
        a[i] = x; //Inseriamo il valore preso in input nell'array
    }

//Stampa dell'array

    printf("I valori inseriti sono: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]); //Per ogni iterazione del ciclo for, stampiamo il valore dell'array corrispondente
    }
}
