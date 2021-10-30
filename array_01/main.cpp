#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	int num = (rand()%100)+1;
	cout << "The num is: " << num << "\n";

	return 0;
}
