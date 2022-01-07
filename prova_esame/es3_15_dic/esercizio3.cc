#include <iostream>
#include "pila.h"

using namespace std;

char parseEspressioneBooleanaPrefissa(char espressione[], bool &corretta){
    bool op_res = false;
    for (int i = 0; espressione[i] != '\0'; ++i) {
        op_res = push(espressione[i]);
        if (!op_res) {
            fprintf(stderr, "Unexpected error!\n");
            exit(1);
        }
    }

    char cur = '\0';
    char op[2] = {'\0'};
    if (!(top(cur) && pop())){
        fprintf(stderr, "Unexpected error!\n");
        exit(1);
    }
    if (cur == 'T') op[0] = 'T';
    else if (cur == 'F') op[0] = 'F';
    while(top(cur) && pop()) {
        if (cur == 'T' || cur == 'F') {
            if (op[0] != '\0') {
                op[1] = cur;
            } else {
                op[0] = cur;
            }
        } else if (cur == '!') {
            if (op[0] != '\0' && op[1] == '\0') {
                bool not_op = op[0] == 'T';
                not_op = !not_op;
                if (not_op) op[0] = 'T'; else op[0] = 'F';
            } else if(op[1] != '\0'){
                bool not_op = op[1] == 'T';
                not_op = !not_op;
                if (not_op) op[1] = 'T'; else op[1] = 'F';
            } else {
                corretta = false;
                return 'E';
            }
        } else if (cur == '&') {
            if (op[0] == '\0' || op[1] == '\0') {
                corretta = false;
                return 'E';
            }
            bool and_op1 = op[0] == 'T', and_op2 = op[1] == 'T';
            and_op1 = and_op1 && and_op2;
            op[1] = '\0';
            if (and_op1) op[0] = 'T'; else op[0] = 'F';
        }
    }
    corretta = true;
    return op[0];
}

int main() {

    const int dimensioneMassima = 100;
    char espressioneBooleana[dimensioneMassima] = "&T!T";
    bool corretta = true;
    char risultatoEspressione;

    // cout << "Inserisci l'espressione: ";
    // cin >> espressioneBooleana;

    risultatoEspressione = parseEspressioneBooleanaPrefissa(espressioneBooleana, corretta);

    if (corretta) {
        cout << "Risultato: " << risultatoEspressione << endl;
    }
    else {
        cout << "Espressione malformata" << endl;
    }

    return 0;
}


// char parseEspressioneBooleanaPrefissa(char espressione [], bool & corretta) {
//     // Scrivere il codice qui
// }
