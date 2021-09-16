#include <iostream>

using namespace std;

/*
  Dati in input due numeri interi, dividendo e divisore, calcolare il
  quoziente e il resto dell'operazione divisione;
*/
int main(int argc, char const *argv[]) {
  int dividend, factor, quotient, rest;

  cout << "Insert dividend: ";
  cin >> dividend;

  cout << "Insert factor: ";
  cin >> factor;


  rest = dividend % factor;
  quotient = (dividend-1)/factor;

  cout << "The quotient of the operation is: " << quotient <<
  "\nThe rest of the operation is: " << rest << "\n";
  return 0;
}
