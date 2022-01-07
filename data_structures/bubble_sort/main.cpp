#include <iostream>
#include <cstdlib>

using namespace std;

void swap (int &a, int &b) {
    a += b;
    b = a - b;
    a = a - b;
    return;
}

void print_arr(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void bubble_sort(int *arr, int size) {
    bool need_swap = true;
    while (need_swap) {
        need_swap = false;
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                need_swap = true;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    srand(time(NULL));

    int size = 100000;
    int *arr = new int[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10000;
    }
    cout << "Sort started!\n";
    bubble_sort(arr, size);
    print_arr(arr, size);

    return 0;
}
