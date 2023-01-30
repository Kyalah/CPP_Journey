#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a = 30;
    double b = 56.7;
    double c = 95.45;
    double d = 87.23;

    double x = a / b;
    double y = c*d;
    double z = c+x/a+(b+c)*9;

    double op1 = min(a,b);
    double op2 = pow(a,3);
   
    cout << op2 << endl;

    return 0;
}