#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string essentialoil[10]={};
    essentialoil[0] = "Lavender";
    essentialoil[4] = "Orange";
    essentialoil[1] = "Clove";
    cout << "Please fill up the number 2 of the array: " << endl;
    getline(cin,essentialoil[2]);
    cout << "Please fill up the number 3 of the array: " << endl;
    getline(cin,essentialoil[3]);

    cout << essentialoil[0] << endl;
    cout << essentialoil[1] << endl;
    cout << essentialoil[2] << endl;
    cout << essentialoil[3] << endl;
    cout << essentialoil[4] << endl;

    return 0;
}