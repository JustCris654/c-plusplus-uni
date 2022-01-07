#include <iostream>

int main(int argc, char const *argv[]) {
  int a, b;
  std::cout << "Inserisci a: ";
  std::cin >> a;

  std::cout << "Inserisci b: ";
  std::cin >> b;

  a += b;   // a contains a and b
  b = a - b;   // b now contains a
  a -= b;   // a now contains a

  std::cout << "a: " << a << "\nb: " << b << '\n';

  return 0;
}
