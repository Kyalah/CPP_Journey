#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "Create a password " << endl;
    string pass;
    getline(cin,pass);

    cout << "What is the password? " << endl;
    string i;
    getline (cin,i);

    int tries = 0;

    while(i != pass && tries<4){
        
        tries = tries + 1;
        
        if(tries==3){
         cout << "Locked out" << endl;
         break;
        }
        
        cout << "Wrong password please try again: " << endl;
        getline(cin,i);

    }
    if(pass==i) cout << "You are in!" << endl;
    else{
       cout << "wait at least 24 hours, bye now! " << endl; 
    }

    return 0;
}