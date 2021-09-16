#include <iostream>
#include <math.h>
using namespace std;

/*
  Dato in input il raggio di un cerchio, calcola
  il volume della sfera
*/
int main(int argc, char const *argv[]) {
  float radius, radius3 = 1, volume;

  cout << "Insert circle radius: ";
  cin >> radius;

  volume = (4.0/3.0)*M_PI*pow(radius, 3);
  cout << "The volume of the sphere is: " << volume << "\n";
  return 0;
}
