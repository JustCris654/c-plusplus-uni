#include <iostream>
#include <cstdlib>

using namespace std;

int *create_arr(int size) {
    int *arr = new int[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = rand()%10 + 1;
    }
    return arr;
}

void print_arr(int *arr, int size) {
    for (auto i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool check_pattern(int *arr, int *pattern, int arr_size, int pat_size, int i) {
    if (i + pat_size >= arr_size) return false;


}

int main(int argc, char *argv[]) {
    srand(time(NULL));

    const int size = 10;
    int *arr = create_arr(size);

    print_arr(arr, size);

    const int pat_size = 3;
    int pattern[pat_size] = {3, 7, 5};
    print_arr(pattern, size);

    return 0;
}
