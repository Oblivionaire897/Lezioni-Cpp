#include <stdio.h>

//Esegui un bubble sort per un numero di volte pari ad n (n inserito dall'utente in input)

const int N = 10;
int a[N] = {120, 17, 19, 1, 12, 15, 10, 9, 129, 130}; //Riempimento manuale dell'array

int bubblesort(int a[N], int n, int N){
    int scambi = 0;
    for(int i = 0; i < N - 1 && scambi < n; i++){ //facciamo il ciclo finché l'array non è finito o il numero di scambi effettuati risulta maggiore al numero di scambi richiesti
        for(int j = 0; j < N - 1; j++){
            int temp;
            if (a[j+1] < a[j]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                scambi++; //Aumento scambi di uno
            }
        }
    }
    return 0;
}

int main(){
    int n;
    printf("Inserire numero scambi ");
    scanf("%d", &n);

    bubblesort(a, n, N);

    for(int i = 0; i<N; i++){
        printf("%d, ", a[i]);
    }
}