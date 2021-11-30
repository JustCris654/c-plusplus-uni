#include <iostream>
#include <cstring>

#include "coda.h"

using namespace std;

int main(int argc, char *argv[]) {

    extern coda Q;
    init();

    char input[10] = "-1";
    char name[30] = "";
    cout << "(1) aggiungi persona, (2) smaltisci persona, (3) stampa situazione corrente, (0) per uscire \n";
    do {
        cin >> input;

        if (strcmp(input, "1") == 0){
            //TODO: aggiungi persona
            cout << "Inserisci nome persona: ";
            cin >> name;
            cout << "Inserendo " << name << "...\n";
            bool res = enqueue(name);
            if (res) { cout << "Persona aggiunta con successo \n"; }
            else { cout << "Errore inaspettato aggiungendo persona \n"; }
        } else if (strcmp(input, "2") == 0){
            //TODO: smaltisci persona
            bool res = dequeue();
            if (res) { cout << "Persona smaltita con successo \n"; }
            else { cout << "Errore inaspettato smaltendo persona \n"; }
        } else if (strcmp(input, "3") == 0){
            //TODO: stampa coda
            print();
        } else {
            cout << "(1) aggiungi persona, (2) smaltisci persona, (3) stampa situazione corrente, (0) per uscire \n";
        }
    } while(strcmp(input, "0") != 0);

    return 0;
}
