/*
** scrivere una procedura che prenda in ingresso un vettore v
** e la sua dimensione d, un nuovo elemento x e un indice i,
** e aggiunga l'elemento x in posizione i nel vettore, e
** incrementi d di uno.  Il vettore passato deve avere
** almeno d+1 elementi.
*/

#include <iostream>

using namespace std;

void addNum(int v[], int d, int num, int index);

int main(){
    // 1 2 3 8 4 999 10 43 5 9
    int v[10] = {1, 2, 3, 8, 4, 10, 43, 5, 9};

    addNum(v, 10, 999, 5);

    for (int i = 0; i < (sizeof(v)/sizeof(*v)); i++) {
       cout << i << " -> " << v[i] << "\n";
    }

    return 0;
}

void addNum(int v[], int d, int num, int index){
    int tmp = v[index];
    v[index] = num;
    for (int i = index+1; i < d; i++){
        v[i] += tmp;
        tmp = v[i] - tmp;
        v[i] -= tmp;
    }
}
