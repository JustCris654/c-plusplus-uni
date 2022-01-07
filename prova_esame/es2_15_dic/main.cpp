#include <iostream>
#include <cstddef>

using namespace std;

char invert_char(char c1) {
    return 'Z' - (c1 - 'a');
}

// Inserire qui la dichiarazione di get_elements
void get_elements(char *source, int source_i, char *d1, int d1_i, char *d2, int d2_i) {
    (void)source; (void)source_i; (void)d1; (void)d1_i; (void)d2; (void)d2_i;
    if (source_i == -1) {
        // inverti ordine array con una funzione ricorsiva
        d1 = new char[d1_i];
        d2 = new char[d1_i];
        return;
    }

    cout << "Source_i: " << source_i << endl;
    // else
    if (source[source_i] >= 'a' && source[source_i] <= 'z') {
        // convert 'a' -> 'Z', 'b' -> 'Y' and so on
        return get_elements(source, --source_i, d1, d1_i++, d2, d2_i);
    } else if (source[source_i] >= '0' && source[source_i] <= '9') {
        return get_elements(source, --source_i, d1, d1_i, d2, d2_i++);
    }
}

void print(const char a[], const int s, const char * prefix) {
    cout << prefix;
    for (int i = 0; i < s; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void read_elements(char s[], const int ms, int & s_s) {
    char r = '\0';
    for (s_s = 0; ((s_s < ms) && (r != '\n')); ) {
        r = cin.get();
        if ((r != '\n') && (r != ' ')) s[s_s++] = r;
    }
}

int main(int argc, char **argv) {
    (void)argc;
    (void)*argv;

    const int maxdim = 10;

    char * d1 = nullptr;
    int d1_i = 0;

    char * d2 = nullptr;
    int d2_i = 0;

    const int ms = maxdim;
    char source[ms];
    int source_i = 0;

    read_elements(source, ms, source_i);
    print(source, source_i, "Source = ");
    cout << source_i << endl;

    d1 = new char[ms];
    d2 = new char[ms];

    get_elements(source, source_i, d1, d1_i, d2, d2_i);

    print(d1, d1_i, "D1     = ");
    print(d2, d2_i, "D2     = ");

    delete [] d1;
    delete [] d2;
}

// Inserire qui la definizione di get_elements e di eventuali altre
// funzioni ausiliarie

// char *get_elements(char *source, int source_i, char *d1, int d1_i, char *d2, int d2_i){

// }
