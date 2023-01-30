#include <iostream>
#include <cmath>

using namespace std;

int cart(){
    string car[3] ={};
    car[0] = "BMW";
    car[1] = "Mercedes";
    car[2] = "Nissan";

    int qt_cars[3] ={};
    qt_cars[0] = 3;
    qt_cars[1] = 4;
    qt_cars[2] = 11;

    cout << qt_cars[0]+qt_cars[1]+qt_cars[2] << endl;
    return 0;
}

int main(){
    cout << "The quantity of cars in stock is :" << endl;
    cart();

    return 0;
}