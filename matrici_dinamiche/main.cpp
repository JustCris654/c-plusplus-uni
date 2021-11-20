#include <iostream>
#include <assert.h>
#include <cstdlib>

using namespace std;

int **createArray(int x, int y);

int main(int argc, char **argv){
    srand(time(NULL));

    assert(argc == 3 && "Must give 2 input params");

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    int **arr = createArray(x, y);

    for (int i = 0; i < x; i ++){
        for (int j = 0; j < y; j ++){
            cout << '[' << i << ',' << j << ']' << " -> " <<
                arr[i][j] << '\n';
        }
    }

    delete[] arr;
}

int **createArray(int x, int y){
    int **arr;

    arr = new int *[x];
    for (int i = 0; i < x; i++){
        arr[i] = new int[y];
    }

    for (int i = 0; i < x; i ++){
        for (int j = 0; j < y; j ++){
            arr[i][j] = rand()%100+1;
        }
    }
    return arr;
}
