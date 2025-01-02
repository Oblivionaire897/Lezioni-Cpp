#include <stdio.h>

const int N = 11;

void bubblesort(int a[], int n) {
    bool scambio = true;    //La variabile booleana (definibile anche con int scambio = 1), ci fa "segnare" se abbiamo effettuato uno scambio.
                            //(se per un ciclo, non scambiamo nulla, l'array è per forza ordinato)
    while (scambio) {
        scambio = false; //Non ho fatto scambi
        int ricorda;
        
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                ricorda = a[i];
                a[i] = a[i + 1];
                a[i + 1] = ricorda;
                scambio = true; //Ho fatto uno scambio, quindi il ciclo while deve ricominciare
            }
        }
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

    bubblesort(a, N);


    printf("I valori ordinati sono: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
}
