#include <iostream>

using namespace std;

char *rotate_arr(char *arr, size_t size, size_t rot) {
    if (rot > size) {
        fprintf(stderr, "Array rotation (%zu) exceeds array lenght(%zu)\n", rot, size);
        exit(1);
    }
    char *arr_2 = new char[size];
    for (size_t i = 0; i < size; ++i) {
        int arr_i = (i + rot)%size;
        arr_2[i] = arr[arr_i];
    }
    return arr_2;
}

void print_arr(char *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char *argv[]) {
    (void)argc;
    (void)*argv;

    const size_t size = 5;
    char arr[size] = {'A', 'B', 'C', 'D', 'E'};
    size_t j = 0;
    cout << "Insert number used for array rotation: ";
    cin >> j;

    char *arr_2 = rotate_arr(arr, size, j);
    print_arr(arr_2 , size);

    return 0;
}
