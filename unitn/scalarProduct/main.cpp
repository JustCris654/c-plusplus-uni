/*
 * scrivere una funzione che prenda come parametri 2 array di double
 * dedoublea stessa dimensione e ne calcoli il prodotto scalare.
 * a[0]*b[0] + ... + a[i]*b[i] + ... + a[dim-1]*b[dim-1]
*/


#include <iostream>

using namespace std;

double scalar_product(double arr1[], double arr2[], int len);

int main(){
	int len = 10;
	double arr1[len];
	double arr2[len]; 

	for (int i = 0; i < len;i++){
		cout << "Insert the " << i << " number of array 1: ";
		cin >> arr1[i];
	}
	for (int i = 0; i < len; i++){
		cout << "Insert the " << i << " number of array 2: ";
		cin >> arr2[i];
	}

	cout << "Il prodotto scalare dei due array è: " << setprecision(20) << scalar_product(arr1, arr2, len)
		<< "\n";

	return 0;
}

double scalar_product(double arr1[], double arr2[], int len){
	double res=0;
	for(int i = 0; i < len; i++){
		res += arr1[i] * arr2[i];
	}
	return res;
}
