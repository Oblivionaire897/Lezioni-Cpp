#include <stdio.h>

const int N = 11;

void insertionsort(int a[], int n){
    for(int i = 1; i<n; i++){
        int attuale = a[i];     //attuale è una variabile (costante per tutta l'iterazione) che indica un elemento dell'array
        int precedente = i - 1; //precedebte è una variabile che indica un indice, non un valore

        while (precedente>=0 && a[precedente] > attuale){ //&& = and; se il valore nella posizione "precedente" è maggiore del valore che stiamo calcolando
            a[precedente+1] = a[precedente]; //Duplica e ricontrolla se è corretto inserire il valore "attuale" lì
            precedente--;
        }

        a[precedente+1] = attuale; //Inseriamo il valore "attuale" nel punto che abbiamo trovato
    }
}

int main() {
    int a[N];
    int x;

    for (int i = 0; i < N; i++) {
        printf("Inserisci il valore numero %d dell'array: ", i + 1);
        scanf("%d", &x);
        a[i] = x;
    }

    insertionsort(a, N);


    printf("I valori ordinati sono: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
}
