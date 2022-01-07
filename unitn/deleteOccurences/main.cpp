/*
**  scrivere una procedura che prenda un vettore v e la sua dimensione
**  d, un elemento x, ed elimina tutte le occorrenze di x (diminuemdo la
**  dimensione d del vettore)
*/
#include <iostream>

using namespace std;

void deleteOccurences(int v[], int &d, int x);
void shiftElements(int v[], int size, int shiftStart);

int main(){
    int d = 9;
    int v[9] = {10, 10, 10, 10, 4, 10, 43, 5, 9};
    int x = 10;

    cout << "Array di partenza \n";
    for (int i = 0; i < d;i++) {
       cout << i << " -> " << v[i] << "\n";
    }

    deleteOccurences(v,d, x);

    cout << "Array con occorrenze di " << x <<  "eliminate\n";
    for (int i = 0; i < d;i++) {
       cout << i << " -> " << v[i] << "\n";
    }
    return 0;
}


void deleteOccurences(int v[], int &d, int x){
    int new_size = d;
    for(int i = 0; i < d; i++){
       if (v[i] == x) {
           shiftElements(v, d, i);
           new_size--;
           i--;
       }
    }
    d = new_size;
}

// [1] [5] [8] [9] []
void shiftElements(int v[], int size, int shiftStart){
    for (int i = shiftStart; i < size + 1; i++) {
       v[i] = v[i+1];
    }
}
