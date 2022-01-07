#include <iostream>

using namespace std;

double pow(double base,double exp);
double pow_pos(double base,double exp);

double  fxp(double b, int e);
int main(){

	double base, exponent;

	// input base
	cout << "Insert the base of the power: ";
	cin >> base;
	// input exponent
	cout << "Insert the exponent of the power: ";
	cin >> exponent;

	double res = pow(base, exponent);

	cout << "The result of the power is: " << res << "\n";

	return 0;
}

double pow(double base, double exp){
	if(exp >= 0) return pow_pos(base, exp);
	return 1 / pow_pos(base, exp * -1);
}

double pow_pos(double base, double exp){
	if(exp == 0) return 1;
	return base * pow_pos(base, exp - 1);
}
double fxp(double b,int e){
	if(e==0)return 1;
	double tmp=fxp(b,e/2);
	tmp*=tmp;
	if(e%2)tmp*=b;
	return tmp;
}
