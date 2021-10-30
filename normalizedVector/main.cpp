#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double sqrt_dot_product(vector<double>);
void normalize_vector(vector<double> &v, double vec_norm);

int main(){
	
	vector<double> v {1,466,0.054,45,217,54.363};


	double res = sqrt_dot_product(v);
	normalize_vector(v, res);
	
	int len = v.size();
	for (int i = 0; i < len; i++){
		cout << v[i] << " ";
	}
	cout << "\n";

	return 0;
}

double sqrt_dot_product(vector<double> v){
	int len = v.size(); 
	double dotpr=0;
	for (int i = 0; i < len; i++){
		dotpr += v[i]*v[i];
	}
	cout << sqrt(dotpr) << "\n";
	return sqrt(dotpr);
}

void normalize_vector(vector<double> &v, double vec_norm){
	int len = v.size();
	for (int i = 0; i < len; i++){
		v[i] = v[i]/vec_norm;
	}
}
