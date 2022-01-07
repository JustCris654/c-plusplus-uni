#include <iostream>
#include <cstdlib>

using namespace std;

int **create_arr(int x, int y) {
    int **arr = new int*[x];
    for(int i = 0; i < x; ++i) {
        arr[i] = new int[y];
        for (int j = 0; j < y; ++j) {
            arr[i][j] = rand()%100+1;
        }
    }
    return arr;
}

void print_arr(int **arr, int x, int y) {
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void print_subarr(int **arr, int x, int y, int sub_x, int sub_y, int size_x, int size_y) {
    if (sub_x + size_x > x || sub_y + size_y > y) {
        fprintf(stderr, "Error: sub matrix end coordinates (%u - %u to %u - %u) exceeds matrix size (%u - %u).\n", sub_x, sub_y , sub_x + size_x, sub_y + size_y, x, y);
        exit(1);
    }
    for (int i = sub_x; i < (sub_x + size_x); ++i) {
        for (int j = sub_y; j < (sub_y + size_y); ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char *argv[]) {
    (void)argc;
    srand(time(NULL));

    char *program = *argv++;
    if (program == NULL) {
        fprintf(stderr, "Exited abnormally");
        exit(1);
    }

    int x = 0,y = 0;
    cout << "Insert array size <cols>: ";
    cin >> x;
    cout << "Insert array size <rows>: ";
    cin >> y;

    int **arr = create_arr(x, y);
    print_arr(arr, x, y);

    int sub_x = 0, sub_y = 0, size_x = 0, size_y = 0;
    cout << "Insert sub matrix coordinates <cols>: ";
    cin >> sub_x;
    cout << "Insert sub matrix coordinates <rows>: ";
    cin >> sub_y;
    cout << "Insert sub matrix size <cols>: ";
    cin >> size_x;
    cout << "Insert sub matrix size <rows>: ";
    cin >> size_y;


    cout << "- - - - - - - - - - -\n";
    cout << "- - - - - - - - - - -\n";
    print_subarr(arr, x , y, sub_x, sub_y, size_x, size_y);

    delete[] arr;

    return 0;
}
