#include <iostream>
#include <cstdlib>

using namespace std;

void hailstone_seq(int num) {
    if (num == 1) {
        return;
    } else if (num % 2 == 0) {
        auto res = num/2;
        cout << res << " ";
        hailstone_seq(res);
    } else {
        auto res = 3*num + 1;
        cout << res << " ";
        hailstone_seq(res);
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
    hailstone_seq(num);

    return 0;
}
