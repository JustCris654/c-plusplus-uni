// implementare la linear search in modo ricorsivo

#include <iostream>

using namespace std;

int linear_search(int v[], int size, int to_find);

int main(){

    int v[9] = {1, 2, 3, 8, 4, 10, 43, 5, 9};
    int index = linear_search(v, 9,4);
    cout << "Index is: " << index << "\n";
    return 0;
}

int linear_search(int v[], int size, int to_find){
    // cout << "i: " << size << "  "<< v[size] << "\n";
    if(v[size-1] == to_find) return size-1;
    if (size == 1) return -1;
    return linear_search(v, --size, to_find);
}
