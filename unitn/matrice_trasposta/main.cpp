#include <iostream>
#include <cstdlib>

using namespace std;

const int ROWS = 5;
const int COLS = 3;

void init(int arr[ROWS][COLS], int rows=ROWS, int cols=COLS);
void print_arr(int *arr[], int rows=ROWS, int cols=COLS);
void traspose(int arr[ROWS][COLS], int transposed[COLS][ROWS], int rows=COLS, int cols=ROWS);

int main(){
    srand(time(NULL));
    int arr[ROWS][COLS];
    int transposed[COLS][ROWS];

    init(arr, ROWS, COLS);
    traspose(arr, transposed, COLS, ROWS);
    print_arr(*arr, ROWS, COLS);
    cout << "\n\n";
    print_arr(*transposed, COLS, ROWS);

    return 0;
}


void init(int arr[ROWS][COLS], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
           arr[i][j] = rand()%10;
        }
    }
}

void traspose(int arr[ROWS][COLS], int transposed[COLS][ROWS], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            transposed[i][j] = arr[j][i];
        }
    }
}

void print_arr(int arr[ROWS][COLS], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

}
