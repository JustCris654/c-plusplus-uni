#include <iostream>
#include <cstdlib>

struct nodo {
    int valore;
    nodo* nodoPrecedente;
    nodo* nodoSuccessivo;
};
typedef nodo* lista;

using namespace std;


void inizializza (int arrayDiInteri [], int dimensioneArray);
void stampaLista (lista nodoCorrente);

// Inserire qui la dichiarazione di "creaLista" e "rimuoviNodiAlternati"

bool push(lista &head, int value);        // push an element to the doubly linked list
lista creaLista(int *arr, int arr_size);  // given an array and his size create a doubly linked list
                                          // with the elements of the array
bool pop_el(lista &head, lista el);       // pop the 2 neighbouring elements of the given element
lista rimuoviNodiAlternati(lista head);   // search and deletes alternate nodes with pop_el()
void deallocaLista(lista &head);          // deallocate list elements

int main() {

    // Non modificare la funzione "main"

    int dimensioneArray = 8;
    int arrayDiInteri[dimensioneArray];
    inizializza(arrayDiInteri, dimensioneArray);

    for (int i = 0; i < dimensioneArray; ++i) {
        cout << arrayDiInteri[i] << " ";
    }
    cout << endl;

    lista nodoIniziale = creaLista(arrayDiInteri, dimensioneArray);

    cout << "Lista iniziale: ";
    stampaLista(nodoIniziale);

    nodoIniziale = rimuoviNodiAlternati(nodoIniziale);

    cout << "Risultato: ";
    stampaLista(nodoIniziale);
    deallocaLista(nodoIniziale);

    return 0;
}

void inizializza (int arrayDiInteri [], int dimensioneArray) {

    // Non modificare la funzione "inizializza"

    srand(time(nullptr));

    for (int i = 0 ; i < dimensioneArray ; i++) {
        arrayDiInteri[i] = i % 3;
    }

    int contatore = dimensioneArray;
    while (contatore > 1) {
        int indice = rand() % contatore;
        contatore--;
        int temp = arrayDiInteri[contatore];
        arrayDiInteri[contatore] = arrayDiInteri[indice];
        arrayDiInteri[indice] = temp;
    }
}

void stampaLista(nodo* nodoCorrente) {

    // Non modificare la funzione "stampaLista"

    while (nodoCorrente != nullptr) {
        cout << nodoCorrente->valore << " ";
        nodoCorrente = nodoCorrente->nodoSuccessivo;
    }
    cout << endl;
}


// Inserire qui la definizione di "creaLista", "rimuoviNodiAlternati" e di eventuali altre funzioni ausiliarie
bool push(lista &head, int value) {
    lista cur = head;
    lista new_node = new nodo{ value, cur, nullptr };
    if (new_node == nullptr) return false;
    if (cur == nullptr) {
        head = new_node;
        return true;
    }
    while(cur->nodoSuccessivo != nullptr) {
        cur = cur->nodoSuccessivo;
    }
    new_node->nodoPrecedente = cur;
    cur->nodoSuccessivo = new_node;
    return true;
}

lista creaLista(int *arr, int arr_size) {
    lista list = new nodo;
    list = nullptr;
    for (int i = 0; i < arr_size; ++i) {
        push(list, arr[i]);
    }
    return list;
}

bool pop_el(lista &head, lista el) {
    lista cur = head;

    if (cur == nullptr || el == nullptr) {
        return false;
    }

    while(cur != el) {
        cur = cur->nodoSuccessivo;
    }

    if (cur->nodoPrecedente->nodoPrecedente == nullptr) {
        delete cur->nodoPrecedente;
        cur->nodoPrecedente = nullptr;
        head = cur;
    } else {
        lista prev_node = cur->nodoPrecedente->nodoPrecedente;
        lista cur_node = cur;
        cur->nodoPrecedente->nodoPrecedente->nodoSuccessivo = cur_node;
        delete cur->nodoPrecedente;
        cur->nodoPrecedente = prev_node;
    }

    if (cur->nodoSuccessivo->nodoSuccessivo == nullptr) {
        delete cur->nodoSuccessivo;
        cur->nodoSuccessivo = nullptr;
    } else {
        lista next_node = cur->nodoSuccessivo->nodoSuccessivo;
        lista cur_node = cur;
        cur->nodoSuccessivo->nodoSuccessivo->nodoPrecedente = cur_node;
        delete cur->nodoSuccessivo;
        cur->nodoSuccessivo = next_node;
    }

    stampaLista(head);
    return true;
}

lista rimuoviNodiAlternati(lista head) {
    lista cur = head;
    bool removed;

    while (cur->nodoSuccessivo != nullptr) {
        if (cur->nodoPrecedente != nullptr) {
            cout << cur->nodoPrecedente->valore << " " << cur->nodoSuccessivo->valore << endl;
            if (cur->nodoPrecedente->valore == cur->nodoSuccessivo->valore) {
                cout << "POP: " << cur->nodoPrecedente->valore << " " << cur->nodoSuccessivo->valore << endl;
                removed = true;
                pop_el(head, cur);
            }
        }
        if (removed) {
            return rimuoviNodiAlternati(head);
        }
        cur = cur->nodoSuccessivo;
    }
    return head;
}

void deallocaLista(lista &head) {
    while(head->nodoSuccessivo != nullptr) {
        head = head->nodoSuccessivo;
        delete head;
    }
    head = nullptr;
}
