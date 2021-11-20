#include <iostream>
#include <cstdlib>


using namespace std;

int main(){
    srand(time(NULL));
		int size = 0;
    cout << "Insert array size: ";
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++){
       arr[i] = rand()%100;
    }
    for (int i = 0; i < size; i++){
        cout << i << "num -> " << arr[i] << '\n';
    }
    delete [] arr;
}
