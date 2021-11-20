#include <iostream>
#include "caesar_crypt.h"

using namespace std;

int main(int argc, char *argv[]) {
	char phrase[] = "abzDEF089";
	cout << phrase << '\n';
	crypt(phrase, 3);
	cout << phrase << '\n';
	decrypt(phrase, 3);
	cout << phrase << '\n';

	// char test[] = "abzy";
	// cout << test << '\n';
	// int key = 3;
	// decrypt(test, key);
	// cout << test << '\n';

	return 0;
}
