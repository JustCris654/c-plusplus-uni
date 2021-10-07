#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int main(int argc, char const *argv[]) {
  cout << "FIBONACCI" << '\n';
  ll num;
  vector<ll> v;
  cout << "Inserisci un numero: ";
  cin >> num;



  for (ll i = 0; i <= num; i++) {
    if(i <= 1){   //0 or 1
      v.push_back(i);
    } else {
      v.push_back(v[i-1] + v[i-2]);
    }
    cout << v[i] << " ";
  }
  return 0;
}
