#include <iostream>
using namespace std;

/*
ESEGUI QUESTO PROGRAMMA.
ANALIZZA L'OUTPUT DEL PROGRAMMA, SEGUENDO PASSO PASSO IL CODICE CHE L'HA GENERATO!
*/


/*
Mostriamo una tecnica alternativa per ottenere lo stesso risultato del precedente esercizio.
Questa tecnica si chiama PASSAGGIO DI PARAMETRI PER RIFERIMENTO.
*/


/*
Definiamo una funzione f che accetta un parametro per RIFERIMENTO.
Un parametro passato per riferimento si chiama anche parametro di INPUT / OUTPUT.
In questo caso non viene fatta una copia di valori nei parametri, 
ma la variabile passata alla funzione è esattamente la stessa variabile del main.
Quindi il cambio che faccio nella funzione si ripercuote DIRETTAMENTE nella variabile originale del main.
Per passare un parametro per riferimento uso il simbolo &, nella definizione dei parametri.
ATTENZIONE: QUESTA TECNICA È POSSIBILE SOLO IN C++. NON È UTILIZZABILE IN FLOWGORITHM.
*/
void f(int & acc) {
    cout << "f: Qui sono nella funzione f." << endl;    
    cout << "f: Nella funzione, il parametro acc ha valore iniziale: " << acc <<endl;
    cout << "f: Cambio il valore di acc e lo visualizzo" << endl;
    acc = acc + 10;
    cout << "f: Nella funzione, il valore di acc ha valore finale: " << acc << endl;
    //QUI NON C'È UN RETURN. La variabile acc è la stessa del main, quindi il cambio si ripercuote anche in main.
}

int main() {

    /*
    Definiamo una variabile locale.
    */
    int acc = 10;

    cout << "main: Qui sono nel main."<<endl;
    cout << "main: In main, la variabile locale acc ha valore " << acc <<endl;

    cout<<endl;
    cout << "main: in main, il valore di acc prima di invocare la funzione f: " << acc << endl;
    cout << "main: Invoco la funzione f."<<endl<<endl;

    f(acc);
    
    cout << endl;
    cout << "main: in main, il valore di acc dopo aver invocato la funzione f: " << acc << endl;
    
    cout <<endl;
    cout << "Osserviamo quindi che la variabile acc di main è stata cambiata all'interno della funzione f. "
            "In questo modo non perdiamo le modifiche fatte da f." << endl;
    cout <<endl;
    cout << "Ora analizza ed esegui il prossimo esercizio." << endl;

}
