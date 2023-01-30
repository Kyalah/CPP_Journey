#include <iostream>
using namespace std;

int main(){
    string try1 = "a simple sentence hello 12";
    double size1 = try1.size();

    int find1 = try1.find("hello", 0);
    cout << find1 << endl;
    

    try1[0] = 'B';
    cout << try1 << endl;
    try1.clear();
    cout << try1 << endl;
    return 0;
}