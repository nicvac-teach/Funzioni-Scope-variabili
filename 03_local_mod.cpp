#include <iostream>
using namespace std;

/*
ESEGUI QUESTO PROGRAMMA.
ANALIZZA L'OUTPUT DEL PROGRAMMA, SEGUENDO PASSO PASSO IL CODICE CHE L'HA GENERATO!
*/


/*
Ma se volessi cambiare il valore di una variabile definita in main da una funzione?
Supponiamo ad esempio di voler aggiornare dentro la funzione f un accumulatore che è stato definito in main.
Usiamo la tecnica mostrata qui sotto.
*/


/*
Definiamo una funzione f che accetta un parametro per valore (o copia).
Restituiamo il valore modificato
*/
int f(int acc) {
    cout << "f: Qui sono nella funzione f." << endl;    
    cout << "f: Nella funzione, il parametro acc ha valore iniziale: " << acc <<endl;
    cout << "f: Cambio il valore di acc e lo visualizzo" << endl;
    acc = acc + 10;
    cout << "f: Nella funzione, il valore di acc ha valore finale: " << acc << endl;

    return acc; // <<<--- RITORNO IL VALORE MODIFICATO!
}

int main() {

    /*
    Definiamo una variabile locale.
    Va definita nel corpo di una funzione (nelle parentesi graffe).
    */
    int acc = 10;

    cout << "main: Qui sono nel main."<<endl;
    cout << "main: in main, la variabile locale acc ha valore " << acc <<endl;

    cout<<endl;
    cout << "main: In main, il valore di acc prima di invocare la funzione f: " << acc << endl ;
    cout << "main: Invoco la funzione f."<<endl<< endl;
    acc = f(acc);
    
    cout << endl;
    cout << "main: In main, il valore di acc dopo aver invocato la funzione f: " << acc << endl;
    
    cout <<endl;
    cout << "Osserviamo quindi che abbiamo aggiornato la variabile acc di main "
            "con il valore restituito dalla funzione f. "
            "In questo modo non perdiamo le modifiche fatte da f." << endl;
    cout <<endl;
    cout << "Ora analizza ed esegui il prossimo esercizio." << endl;

}
