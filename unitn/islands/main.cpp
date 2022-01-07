#include <iostream>
#include <cstdlib>

using namespace std;

const int SIZE = 10;

void init(int arr[SIZE][SIZE], int size=SIZE);
void print_arr(int arr[SIZE][SIZE], int size=SIZE);
int find_islands(int arr[SIZE][SIZE], int size=SIZE);
bool check_island(int arr[SIZE][SIZE], int row, int column, int size=SIZE);

int main(){
    srand(time(NULL));
    int arr[SIZE][SIZE];
    init(arr, SIZE);
    print_arr(arr, SIZE);
    int res = find_islands(arr, SIZE);
    cout << "\n\nresult: " << res << '\n';
    return 0;
}

bool check_island(int arr[SIZE][SIZE], int row, int column, int size){
    for(int i = row-1; i <= row+1; i ++){
        for(int j = column-1; j <= column+1; j++){
            if(i>=0 && j >=0 && i<size && j<size && (i!=row || j!=column)){
                if(arr[i][j] == 1) return false;
            }
        }
    }
    return true;
}


int find_islands(int arr[SIZE][SIZE], int size){
    int counter = 0;
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++){
            if (arr[i][j] == 1) {
                if(check_island(arr, i, j, size)) counter++;
            }
        }
    }
    return counter;
}

void init(int arr[SIZE][SIZE], int size){
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++){
           arr[i][j] = rand()%2 && ((rand()%3)/2);
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
