#include <cstdio>

//Le righe commentate sono spiegazioni. Se una stringa di codice è stata commentata, è perché mi hai detto che non è ancora stata affrontata in classe

int main() {

    //Variabili

    int x = 1;          //Valore intero
    float x = 1.2;      //Valore decimale
    //char x = 'a';     //Valore testuale. Va inserito tra apici 
    //bool x = 1;       //Valore booleano. Può essere 1 o 0 (acceso o spento).

    const int x = 1;    // Valore costante. Non può essere cambiato dopo che è stato definito

    //Operatori
    int y;

        //Operazioni di base

        y = x + 1;
        y = x - 1;
        y = x * 1;
        y = x / 1;

        //Operazioni "extra"

        y = x % 1;  //Restituisce il resto della divisione
        y = x++;    //Equivalente a scrivere "x+1"
        y = x--;    //Equivalente a scrivere "x-1"

    //Controllo condizionale

    //if: Se la condizione tra parentesi tonde è "verificata", esegui quello che c'è scritto nelle graffe; altrimenti passa avanti
        if (x<1){
            printf("x è minore di 1");
        }

    //if...else: Se la condizione tra parentesi tonde è verificata, esegui quello che c'è scritto nelle graffe; altrimenti esegui quello che c'è scritto nell'else
        if (x<1){
            printf("x è minore di 1");
        } else {
            printf("x è maggiore di 1");
        }

    //elif: Concatenazione di tanti if...else diversi.
        if (x<1){
            printf("x è minore di 1");
        } else if (x>2) {
            printf ("x è maggiore di 2");
        } else {
            printf ("x è compreso tra 1 e 2");
        }

    //Switch: controlla i vari casi di una espressione
        // switch(x+y){
        //     case 1:
        //         printf("x+y è uguale a 1");
        //         break;
        //     case 2:
        //         printf("x+y è uguale a 2");
        //         break;
        //     default:
        //         printf("x+y è diverso da 1 e 2");
        //         break;
        // }

    //Cicli

    //while: esegui quello che c'è scritto tra parentesi graffe finché la condizione è verificata
    while (x<10){
        x++;
    }

    //do-while: prima fai le operazioni, poi controlli la condizione
    do{
        x++;
    }
    while (x<10);

    //for: (inizializzazione, condizione, aggiornamento).
    //Il ciclo for esegue le operazioni tra parentesi graffe finché la condizione è verificata.
    //Al primo ciclo, esegue l'inizializzazione e ad ogni ciclo, esegue l'aggiornamento.
    for (x = 0; x<10; x++){
        printf("%d", x);
    }
}