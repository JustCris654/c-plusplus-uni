#include "iostream"
#include "cstdlib"
#include "assert.h"

using namespace std;

double calc(int a, int b, char op);

int main(int argc, char *argv[]){

    assert(argc == 4 && "Must specify 3 parameters");

    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    char op = argv[2][0];

    double res = calc(a,b,op);
    cout << "The result is: " << res << "\n";



    return 0;
}

double calc(int a, int b, char op){
    double res = 0;
    switch(op){
        case '+':
            res = a+b;
            break;
        case '-':
            res = a-b;
            break;
        case 'x':
            res = a*b;
            break;
        case '/':
            res = a*1.0/b*1.0;
            break;
        default:
            exit(1);
            break;
    }
    return res;
}
