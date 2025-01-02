#include <stdio.h>

//Ordina un array numerico di 10 elementi inseriti dall'utente in modo decrescente con bubble Sort

const int N = 10;

int bubblesort(int a[N], int N){
    int verificatore = 1;
    int i = 0;

    while(verificatore == 1){
        verificatore = 0;
        for(i = 0; i<N-1; i++){
            if(a[i] < a[i+1]){ //Ricordarsi il minore, perché il ciclo deve ordinare in ordine decrescente
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
                verificatore = 1;
            }
        }
    }
    return 0;
}

int main(){
    //Riempimento dell'array
    int a[N];

    for(int i = 0; i<N-1; i++){
        int temp;
        printf("Inserire valore ");
        scanf("%d", &temp);
        a[i] = temp;
    }

    bubblesort(a, N);

    for(int i = 0; i<N-1; i++){
        int temp = 0;
        temp = a[i];
        printf("%d, ", temp);
    }
}