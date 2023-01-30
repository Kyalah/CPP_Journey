#include <iostream>
#include <cmath>

using namespace std;

string color(int col){
    string colfull;

    switch(col){
    case 1:
    colfull = "red";
    break;
    case 2:
    colfull = "yellow";
    break;
    case 3:
    colfull = "blue";
    break;
    
    default:
    colfull = "wrong number";
    }
    return colfull;
}



int main(){
    cout << color(1) << endl;


    return 0;
}