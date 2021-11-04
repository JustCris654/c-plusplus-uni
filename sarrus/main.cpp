#include <iostream>
#include <cstdlib>

using namespace std;

const int SIZE = 3;

void init(int arr[SIZE][SIZE], int size=SIZE);
void print_arr(int arr[SIZE][SIZE], int size=SIZE);
int diag_1(int arr[SIZE][SIZE], int size);
int diag_2(int arr[SIZE][SIZE], int size);

int main(){
    srand(time(NULL));

    int arr[SIZE][SIZE];
    init(arr, SIZE);
    print_arr(arr, SIZE);
    cout << "\n" << diag_1(arr, SIZE) << "\n";
    return 0;
}

// a b c a b c a b c
// d e f d e f d e f
// g h i g h i g h i
// a b c a b c a b c
// d e f d e f d e f
// g h i g h i g h i
int diag_1(int arr[SIZE][SIZE], int size){
    int diag = 1;
    int res = 0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << "pos - " << j%size << " val: " << arr[j%size][j%size] << "\n";
            diag*=arr[j%size][j%size];
        }
        cout << "diag " << i << " - " << diag << "\n";
        res=+diag;
        diag = 1;
    }
    return res;
}

int diag_2(int arr[SIZE][SIZE], int size){
    return 0;
}


void init(int arr[SIZE][SIZE], int size){
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++){
            arr[i][j] = rand()%10;
        }
    }
}
void print_arr(int arr[SIZE][SIZE], int size){
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

}
