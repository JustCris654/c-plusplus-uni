#include <iostream>

using namespace std;

int calcola_it(int x, int y) {
    int res = 0;
    while (x >= y) {
        x = x-y;
        res++;
    }
    return res;
}

int calcola_ric(int x, int y) {
    if (x >= y) return 1 + calcola_ric(x-y, y);
    else return 0;
}

int main(int argc, char *argv[]) {

    cout << calcola_ric(10, 2) << '\n';

    return 0;
}
