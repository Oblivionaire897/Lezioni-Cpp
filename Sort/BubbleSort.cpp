#include <stdio.h>

const int N = 11;

void bubblesort(int a[], int n) {
    int ricorda; //Creiamo una variabile ricorda che ci servirà per tenere "a mente" il valore da scambiare
    
    for (int i = 0; i < n - 1; i++)
    {//Un primo ciclo for ci permette di ripetere tutto il controllo un numero di volta sufficiente
        for (int j = 0; j < n - i - 1; j++)
        {//Il secondo ciclo for è quello che realmente fa il controllo
            if (a[j] > a[j + 1])
            {//Se il valore in posizione 1 è maggiore di quello dopo (male): 
                ricorda = a[j];
                a[j] = a[j + 1];
                a[j + 1] = ricorda;
            }
        }
    }
}

int main() {
    int a[N];
    int x;

//Riempimento dell'array tramite input utente

    for (int i = 0; i < N; i++) {
        printf("Inserisci il valore numero %d dell'array: ", i + 1);
        scanf("%d", &x);
        a[i] = x;
    }

    bubblesort(a, N); //Castiamo la funzione creata bubblesort sull'array a

//Stampa dell'array

    printf("I valori ordinati sono: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
}
