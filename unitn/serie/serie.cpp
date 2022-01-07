#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main(int argc, char const *argv[]) {
  cout << "CALCOLA SERIE" << "\n";
  size_t num;
  cout << "Inserisci un numero: ";
  cin >> num;

  double result = 0;
  for (size_t i = 1; i <= num; i++) {
    result += 1/pow(i, 2);
  }
  cout << fixed;
  cout << "The result is: " << setprecision(10) << result << "\n";
  return 0;
}
