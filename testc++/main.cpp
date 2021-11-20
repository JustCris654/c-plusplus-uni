#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    int a = 10;
    int *b = &a;

    cout << a << "\n";
    cout << *b << "\n";
    cout << sizeof a << "\n";
    cout << sizeof b << "\n";



    return 0;
}
