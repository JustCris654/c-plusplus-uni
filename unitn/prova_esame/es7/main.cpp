#include <iostream>

using namespace std;

struct node {
    char v;
    node *next;
};

typedef node *char_list;

bool empty(char_list list) {
    return list == NULL;
}

bool list_push(char_list list, char_list tail, char v) {
    char_list new_node = new node;
    new_node->v = v;
    new_node->next = NULL;
    if (empty(list)) {
        list = new_node;
        return true;
    } else {
        tail->next = new_node;
        tail = tail->next;
    }
    return false;
}

void print(char_list l) {
    char_list cur = l;
    while (cur != NULL) {
        cout << cur->v << "  ";
        cur = cur->next;
    }
    cout << '\n';
}

/* Inserire qui sotto la dichiarazione della funzione extract */
char_list extract(char *l);
/* Inserire qui sopra la dichiarazione della funzione extract */

/* Solo di esempio, non fate assunzioni su questo valore */
const int DIM = 255;

int main(int argc, char ** argv) {
    char input_string[DIM+1];
    char * extracted;
    char answer;

    char_list str = new node;
    char_list head = str, tail = NULL;
    list_push(str, tail, 'c');
    list_push(str, tail,'i');
    list_push(str, tail,'a');
    list_push(str, tail,'o');
    print(str);

    do {
        std::cout << "Inserire la stringa da controllare: ";
        std::cin >> input_string;
        // extracted = extract(input_string);
        std::cout << "La stringa estratta e': " << extracted << std::endl;

        delete [] extracted;
        std::cout << "Si vuole inserire un'altra stringa? [*/n]";
        std::cin >> answer;
    } while (answer != '\0' && answer != 'N' && answer != 'n');
    return 0;
}

/* Inserire qui sotto la definizione della funzione estract */
// char_list extract(char *l) {
//     char_list str = new node;
//     for (int i = 0; l[i] != '\0'; ++i) {
//         if (l[i] == '@') {
//             list_push(str, l[i]);
//         }
//     }
//     list_push(str, '\0');
//     return str;
// }
/* Inserire qui sopra la definizione della funzione estract */
