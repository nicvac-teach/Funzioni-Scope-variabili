#include <iostream>
using namespace std;

/*
ESEGUI QUESTO PROGRAMMA.
ANALIZZA L'OUTPUT DEL PROGRAMMA, SEGUENDO PASSO PASSO IL CODICE CHE L'HA GENERATO!
*/


/*
Una varibile locale viene "vista" solo nel blocco di parentesi graffe { } in cui è definita.
*/


/*
Definiamo una funzione f che accetta un parametro per valore (o copia).
Il parametro per valore (o copia) si comporta come una variabile locale alla funzione.
*/
void f(int loc) {
    //Qui la variabile loc si chiama PARAMETRO FORMALE (usato nella definizione della funzione)
    cout << "f: Qui sono nella funzione f." << endl;    
    cout << "f: Nella funzione, il parametro loc ha valore iniziale: " << loc <<endl;
    cout << "f: Cambio il valore di loc e lo visualizzo" << endl;
    loc = loc + 10;
    cout << "f: Nella funzione, il parametro loc ha valore finale: " << loc <<endl;
}

int main() {

    /*
    Definiamo una variabile locale.
    Va definita nel corpo di una funzione (nelle parentesi graffe).
    */
    int loc = 10;

    cout << "main: Qui sono nel main."<<endl;
    cout << "main: In main, la variabile locale loc ha valore " << loc <<endl;

    cout<<endl;
    cout << "main: In main, il valore di loc prima di invocare la funzione f: " << loc << endl;
    cout << "main: Invoco la funzione f."<<endl << endl;
    
    //Qui la variabile loc si chiama PARAMETRO ATTUALE (usato nella invocazione della funzione)
    f(loc);
    
    cout << endl;
    cout << "main: in main, il valore di loc dopo aver invocato la funzione f: " << loc << " !!!"<<endl;
    
    cout <<endl;
    cout << "Osserviamo quindi che loc di main, essendo una variabile diversa da loc in f, non ha subito cambi!!!" << endl;
    cout <<endl;
    cout << "Il parametro loc in f è una NUOVA variabile. Anche se ha lo stesso nome "
        "della variabile definita nel main, è una variabile diversa! "
        "È come avere due variabili diverse che, quando parte la funzione f, hanno lo stesso valore"<<endl;
    cout <<endl;
    cout << "Ora analizza ed esegui il prossimo esercizio." << endl;

}
