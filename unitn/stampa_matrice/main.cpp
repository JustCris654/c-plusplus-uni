#include <iostream>
#include <cstdlib>

using namespace std;

const int ROWS = 10;
const int COLS = 10;

void init(int arr[ROWS][COLS], int rows, int cols);
void print_matrix(int arr[ROWS][COLS], int rows, int cols);


int main() {
    srand(time(NULL));

    int arr[ROWS][COLS];

    init(arr, ROWS, COLS);
    print_matrix(arr, ROWS, COLS);



    return 0;
}

void init(int arr[ROWS][COLS], int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++){
           arr[i][j] = rand()%10+1;
        }
    }
}
void print_matrix(int arr[ROWS][COLS], int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

}
