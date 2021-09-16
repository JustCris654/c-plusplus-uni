#include <iostream>
using namespace std;

/*
  Stampa tabelle and e or
  ff
  fv
  vf
  vv
*/

char getCharFromBool(bool a){
    return a ? 'v' : 'f';
}

int main(int argc, char const *argv[]) {

  bool variants [4][2];


  for (int i = 0; i < 4; i++) {
    bool a = i > 1;
    bool b = i%2!=0;
    bool c = a && b;
    variants[i][0] = a;
    variants[i][1] = b;
  }

  /* And (&&) table */
  cout << "AND TABLE" << "\n";
  for (int i = 0; i < 4; i++) {
    bool res = variants[i][0] && variants[i][1];
    cout << getCharFromBool(variants[i][0]) << " " << getCharFromBool(variants[i][1]) << " -> " << getCharFromBool(res) <<"\n";
  }
  /* Or (||) table */
  cout << "\nOR TABLE" << "\n";
  for (int i = 0; i < 4; i++) {
    bool res = variants[i][0] || variants[i][1];
    cout << getCharFromBool(variants[i][0]) << " " << getCharFromBool(variants[i][1]) << " -> " << getCharFromBool(res) <<"\n";
  }

  return 0;
}
