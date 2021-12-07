#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream file;
    ofstream out;
    file.open("input", ios::in);
    out.open("output", ios::out);

    assert(file.is_open());

    char in;
    bool upper = true;
    file >> noskipws;
    while(file >> in) {
        if (in == '.' ||
            in == '!' ||
            in == '?'
        ) {
            upper = true;
        } else if (upper && ( in >= 'a' && in <= 'z' )) {
            in -= 32;
            upper = false;
        }
        out << in;
    }

    return 0;
}
