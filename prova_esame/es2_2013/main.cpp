#include <iostream>
#include <cstdlib>

using namespace std;

void esagonal_arr(int *arr, int index, int n) {
    if (index == n) return;
    arr[index] = index * (2*index - 1);
    esagonal_arr(arr, ++index, n);
}

void print_arr(int *arr, int size) {
    for(int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char *argv[]) {
    (void)argc;

    char *program = *argv++;
    if (program == NULL) {
        cout << "Error!\n";
        exit(1);
    }

    if (*argv == NULL) {
        cout << "Usage: <number>\n";
        exit(1);
    }

    int n = atoi(*argv);
    int *arr = new int[n];
    esagonal_arr(arr, 0, n);
    delete[] arr;
    print_arr(arr, n);
    return 0;
}
