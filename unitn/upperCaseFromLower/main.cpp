#include <iostream>

using namespace std;

/*
  Dato in input un carattere maiuscolo, ritorna lo stesso carattere
  minuscolo;
*/
int main(int argc, char const *argv[]) {
  char lower, upper;
  cout << "Inserisci carattere maiuscolo: ";
  cin >> upper;

  lower = upper + 32;
  cout << "Il carattere minuscolo è: " << lower << "\n";
  return 0;
}
