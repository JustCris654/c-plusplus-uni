#include <iostream>
#include <fstream>
#include <cstdlib>

#include "pila.h"

using namespace std;

int main(int argc, char *argv[]) {
    const char file_path[] = "input";
    ifstream file;
    ofstream out;
    out.open("output", ios::out);
    file.open(file_path, ios::in);

    init();
    extern lista pila;

    if (file.is_open()) {
        char word[100];
        while(file >> word){
            push(atoi(word));
        }
    }

    int num = 0;
    while(top(num) != false){
        out << num << '\n';
        pop();
    }
    out.close();
    file.close();

    return 0;
}
