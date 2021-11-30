#include <iostream>
#include <assert.h>

using namespace std;

bool is_palindrome(char *word, int word_len, int pos=0){
    if(pos == word_len/2) return true;
    if(word[pos] == word[word_len-1-pos]){
        pos++;
        return is_palindrome(word, word_len, pos);
    } else {
        return false;
    }
}

int main(int argc, char *argv[]) {

    int arr_len = 0;
    cout << "Inserisci numero caratteri: ";
    cin >> arr_len;

    char *word = new char[arr_len];
    cout << "Inserisci parola: ";
    cin >> word;

    if(is_palindrome(word, arr_len)){
        cout << "Palindroma\n";
    } else {
        cout << "Non palindroma\n";
    }

    return 0;
}
