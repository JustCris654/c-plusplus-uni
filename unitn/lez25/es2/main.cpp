#include <iostream>
#include <fstream>
#include "pila.h"
#include <assert.h>

using namespace std;

int main(int argc, char *argv[]) {

    ifstream file;
    const char file_path[]="input.txt";
    file.open(file_path, ios::in);

    extern lista pila;
    init();
    assert(file.is_open());

    char c;
    int val;

    while(file.get(c)){

        if(!(c==')' || c=='(')){
            break;
        }
        if(top(val)==false){
            if(c == '(' || c == ')'){
                push(c);
                // cout << "+" << '\n';
            }
        } else {
            if(val == (int)c){
                // cout << "+" << '\n';
                push(c);
            } else {
                // cout << "-" << '\n';
                pop();
            }
        }
    }

    if(top(val) == true){
        cout << "Non bilanciate " << '\n';
    } else {
        cout << "Bilanciate" << '\n';
    }

    return 0;
}
