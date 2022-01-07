#include <iostream>


using namespace std;

int findMin(int arr[], int len, int start);
void swap(int &a, int &b);

int main(){

	int arr[] = {1,5,8,2,3,4,9,7,6,10, 1};

	int min=0, tmp=0;
	for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++){
		min = findMin(arr, sizeof(arr)/sizeof(*arr), i);
		cout << arr[i] << " - " << arr[min] << "\n";
		swap(arr[i], arr[min]);
		cout << arr[i] << " - " << arr[min] << "\n";
	}

	for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++){
		cout << arr[i] << "\n";
	}
	cout << "\n";

}

void swap(int &a, int &b){
	a += b;   // a contains a and b
	b = a - b;   // b now contains a
	a -= b;   // a now contains a
}


int findMin(int arr[], int len, int start){
	int min = start; 
	for (int i = start+1; i < len; i++){
		if(arr[i] < arr[min]) min = i;
	}
	return min;
}
