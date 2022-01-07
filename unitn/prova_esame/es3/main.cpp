#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;

bool is_email(char *text){
    cout << " * Checking: " << text << '\n';
    bool at_found = false;
    bool dot_found = false;
    for (int i = 0; text[i] != '\0'; ++i){
        if (text[i] == '@') {
            if (i == 0) return false;
            else if (i > 0 && at_found) return false;
            at_found = true;
        }
        else if (text[i] == '.' && at_found) {
            if (i > 0 && dot_found && text[i-1] == '.') return false;
            dot_found = true;
        }
    }
    return at_found && dot_found;
}

int main(int argc, char *argv[]) {
    ifstream file;
    assert(argc > 1 && "Provide file input as argument.");
    file.open(argv[1], ios::in);

    if (file.is_open()){
        char text[100];
        int counter = 0;
        while (file >> text){
            is_email(text) && ++counter;
        }

        cout << "Numero stringhe compatibili trovate: " << counter << '\n';
    } else {
        cout << "Could not open file!";
    }

    return 0;
}
