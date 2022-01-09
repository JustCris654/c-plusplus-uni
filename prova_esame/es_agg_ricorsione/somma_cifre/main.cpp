#include <iostream>
#include <cstdlib>

using namespace std;

int somma_cifre(int num, int res) {
    if (num < 10) return res + num;
    else {
        cout << num << " -> ";
        res += num%10;
        num /= 10;
        cout << num << endl;
        return somma_cifre(num, res);
    }
}

int main(int argc, char *argv[]) {
    (void) argc;
    char *prg = *argv++;
    if (prg == nullptr) {
        fprintf(stderr, "Error\n");
    }
    char *num_str = *argv++;
    if (num_str == nullptr) {
        fprintf(stderr, "Usage: %s <num>\n", prg);
    }
    auto num = atoi(num_str);

    auto res = somma_cifre(num, 0);
    cout << "Res: " << res << endl;

    return 0;
}
