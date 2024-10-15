#include <iostream>
using namespace std;

/*
ESEGUI QUESTO PROGRAMMA.
ANALIZZA L'OUTPUT DEL PROGRAMMA, SEGUENDO PASSO PASSO IL CODICE CHE L'HA GENERATO!
*/

/*
Una varibile globale viene "vista" da tutte le funzioni di un programma,
main compreso.
Analizza ed esegui questo codice.
*/

/*
Definiamo una variabile globale.
Va definita prima di ogni altra funzione che la utilizzi.
*/
int glob = 0;

/*
Definiamo una funzione che cambia il valore alla variabile globale
*/
void f() {
    cout << "f: Qui sono nella funzione f" << endl;
    cout << "f: Nella funzione, la variabile globale glob ha valore " << glob <<endl;
    cout << "f: Cambio il valore di glob e lo visualizzo" << endl;
    glob = glob + 10;
    cout << "f: Nella funzione, Valore di glob dopo il cambio: " << glob << endl;
}

int main() {

    cout << "main: Qui sono nel main."<<endl;
    cout << "main: La variabile globale glob ha valore " << glob <<endl;
    cout << "main: Cambio il valore di glob a 10 e lo visualizzo" << endl;

    glob = 10;
    cout << "main: In main, il valore di glob dopo il cambio: " << glob  << endl;;

    cout<<endl;
    cout << "main: In main, il valore di glob prima di invocare la funzione f: " << glob << endl;
    cout << "main: Invoco la funzione f."<<endl<<endl;


    f();
    
    cout << endl;
    cout << "main: In main, il valore di glob dopo aver invocato la funzione f: " << glob << endl;
    cout << "main: Osserviamo quindi che glob è una variabile a cui tutte le funzioni possono accedere." << endl;

    cout <<endl;
    cout << "ATTENZIONE! Le variabili globali vanno evitate perché possono causare comportamenti imprevedibili "
    "e difficili da tracciare, poiché qualsiasi parte del programma può modificarle, "
    "rendendo il debugging e la manutenzione più complessi." << endl;

    cout <<endl;
    cout << "Ora analizza ed esegui il prossimo esercizio." << endl;


}
