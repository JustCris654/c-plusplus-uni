/*
 * scrivere una procedura che calcoli la norma di un vettore di double
 * (la radice quadrata del prodotto scalare con se' stesso).
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double sqrt_dot_product(vector<double>);

int main(){
	
	vector<double> v {1,466,0.054,45,217,54.363};


	double res = sqrt_dot_product(v);

	cout << "Square root of dot product is: " << res << "\n";
	return 0;
}

double sqrt_dot_product(vector<double> v){
	int len = v.size(); 
	double dotpr=0;
	for (int i = 0; i < len; i++){
		dotpr += v[i]*v[i];
	}
	return sqrt(dotpr);
}
