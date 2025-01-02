#include <stdio.h>

const int N = 11;

void bubblesort(int a[], int n) {
    bool scambio; 
    int ricorda;
    //Usando un do-while posso fare un'operazione in meno
    do {
        scambio = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                ricorda = a[i];
                a[i] = a[i + 1];
                a[i + 1] = ricorda;
                scambio = true;
            }
        }
    } while (scambio);
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
