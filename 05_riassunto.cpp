#include <iostream>
using namespace std;

/*
ESEGUI QUESTO PROGRAMMA.
ANALIZZA L'OUTPUT DEL PROGRAMMA, SEGUENDO PASSO PASSO IL CODICE CHE L'HA GENERATO!
*/


/*
In questo esercizio ripetiamo tutti i tipi di passaggi di parametri.
A differenza degli esercizi visti precedentemente, 
i parametri delle funzioni hanno un nome differente dal nome della variabile definita nel main.
Questo per sottolineare che non c'è una relazione fra il nome della variabile
usato per invocare la funzione (PARAMETRO ATTUALE) e il nome del parametro usato nella 
definizione della funzione (PARAMETRO FORMALE). 
*/

//Definiamo una variabile globale.
int glob = 10;


//Funzione che modifica una variabile globale
void modificaGlobale() {
    cout << "modificaGlobale: nella funzione, glob ha valore iniziale " << glob <<endl;
    glob = glob + 10;
    cout << "modificaGlobale: nella funzione, glob ha valore finale " << glob <<endl;
}

//Funzione che prende in input un parametro passato per valore e restituisce il nuovo valore
int aggiungi( int p ) {
    cout << "aggiungi: nella funzione, p ha valore iniziale " << p <<endl;
    p = p + 10;
    cout << "aggiungi: nella funzione, p ha valore finale " << p <<endl;
    return p;
}

//Funzione che prende in input un parametro passato per riferimento e lo modifica direttamente
void aggiungiRif( int & p ) {
    cout << "aggiungiRif: nella funzione, p ha valore iniziale " << p <<endl;
    p = p + 10;
    cout << "aggiungiRif: nella funzione, p ha valore finale " << p <<endl;
}


int main() {

    cout << "------------------------------------------------"<<endl;
    cout << "main: La variabile globale glob ha valore " << glob <<endl;
    cout << "main: Cambio il valore di glob e lo visualizzo" << endl;
    glob = glob + 10;
    cout << "main: in main, il valore di glob dopo il cambio: " << glob  << endl;;
    cout<<endl;
    cout << "main: in main, il valore di glob prima di invocare la funzione: " << glob << endl;
    cout << "main: Invoco la funzione modificaGlobale."<<endl << endl;

    modificaGlobale();
    cout << endl;
    cout << "main: in main, il valore di glob dopo aver invocato la funzione: " << glob << endl;
    cout << "------------------------------------------------"<<endl<<endl;

    //Definisco la variabile locale
    int acc = 10;
    
    cout << "------------------------------------------------"<<endl;
    cout << "main: Passaggio per valore, senza aggiornare la variabile di main." << endl;
    cout << "main: in main, il valore di acc prima di invocare la funzione: " << acc << endl;
    cout << "main: Invoco la funzione aggiungi. "<<endl << endl;
    aggiungi(acc);
    cout << endl;
    cout << "main: in main, il valore di acc dopo aver invocato la funzione f: " << acc << endl;
    cout << endl;
    cout << "------------------------------------------------"<<endl<<endl;

    cout << "------------------------------------------------"<<endl;
    cout << "main: Passaggio per valore, con aggiornamento della variabile di main." << endl;
    cout << "main: In main, il valore di acc prima di invocare la funzione: " << acc << endl;
    cout << "main: Invoco la funzione aggiungi. "<<endl << endl;
    acc = aggiungi(acc);
    cout << endl;
    cout << "main: In main, il valore di acc dopo aver invocato la funzione f: " << acc << endl;
    cout << "------------------------------------------------"<<endl<<endl;

    cout << "------------------------------------------------"<<endl;
    cout << "main: Passaggio per riferimento (e quindi aggiornamento implicito della variabile di main)." << endl;
    cout << "main: in main, il valore di acc prima di invocare la funzione: " << acc << endl;
    cout << "main: Invoco la funzione aggiungiRif. "<<endl << endl;

    aggiungiRif(acc);
    cout << endl;
    cout << "main: in main, il valore di acc dopo aver invocato la funzione f: " << acc << endl;
    cout << "------------------------------------------------"<<endl<<endl;

}
