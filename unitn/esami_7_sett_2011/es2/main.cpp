#include <iostream>
#include <cstdlib>

using namespace std;

void rand_arr(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = (rand() % 100) + 1;
    }
}

void print_arr(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

bool pattern_match(int *pattern_arr, int patt_size, int *text_arr, int text_size) {
    for (int i = 0; i < text_size; ++i) {
        if (text_arr[i] == pattern_arr[0]) {
            bool match = true;
            for (int j = 0; j < patt_size; ++j) {
                if (text_arr[i+j] != pattern_arr[j]) {
                    match = false;
                }
                if (match) return true;
            }
        }
    }
    return false;
}

int main(int argc, char *argv[]) {
    srand(time(NULL));

    const int patt_size = 3;
    const int text_size = 20;
    int pattern_arr[patt_size];
    int text_arr[text_size];

    rand_arr(pattern_arr, patt_size);
    rand_arr(text_arr, text_size);

    print_arr(pattern_arr, patt_size);
    print_arr(text_arr, text_size);

    cout << pattern_match(pattern_arr, patt_size, text_arr, text_size) << '\n';

    return 0;
}
