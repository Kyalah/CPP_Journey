#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main(){

    cout << "Hello, welcome to the app!" << endl;
    cout << "Please create a new account" << endl;
    cout << "Choose a username" << endl;

    string user;
    getline(cin,user);

    cout << "Choose a password: " << endl;
    string pass;
    getline(cin,pass);

    cout << "Please enter your information" << endl;
    cout << "Username: " << endl;
    string username;
    getline(cin,username);

    cout << "Password: " << endl;
    string password;
    getline(cin,password);

    while(username != user || password != pass ){
    cout << "Wrong username or password please try again" << endl;
    cout << "Username: " << endl;
    getline(cin,username);

    cout << "Password: " << endl;
    getline(cin,password);
    }

    cout << "Welcome to the bagel app!" << endl;
    double balance = 5.00;
    double add;
    cout << "Would you like to add money to your balance? " << endl;
    string q1;
    getline(cin,q1);
    //cin >> q1;
    //transform(q1.begin(), q1.end(), q1.begin(), ::tolower);
    if(q1 == "yes"){
        cout << "Enter how much money you want to add" << endl;
        cin >> add;
        cout << "your new balance is: " << balance+add << " dollars" << endl;
    }

    if (q1 != "yes"){
        cout << "alright" << endl;
    }

    //transform(q2.begin(), q2.end(), q2.begin(), ::tolower);
    cout << "Would you like a bagel today? " << endl;
    string f2;
    cin >> f2;

    if(f2 == "yes"){
        cout << "please select the bagel you want " << endl;
        string bageltype[]={"everything bagel","jelly bagel","butter bagel"};
        double bagelprices[]={3.00,4.00,5.01};

        cout << "1. " << bageltype[0] << "--" << bagelprices[0] << " dollars" << endl;
        cout << "2. " << bageltype[1] << "--" << bagelprices[1] << " dollars" << endl;
        cout << "3. " << bageltype[2] << "--" << bagelprices[2] << " dollars" << endl;

        cout << "Your choice: " << endl;
        int q3;
        cin >> q3;

        if (q3==1){
            cout << "you have ordered a " << bageltype[0] << endl;
            cout << "The total of your order is " << bagelprices[0] << " dollars" << endl;
            cout << "You have " << balance-bagelprices[0] << " dollars left on your balance" << endl;

        }else if (q3==2){
            cout << "you have ordered a " << bageltype[1] << endl;
            cout << "The total of your order is " << bagelprices[1] << " dollars" << endl;
            cout << "You have " << balance-bagelprices[1] << " dollars left on your balance" << endl;  

        }else if (q3==3){
            cout << "you have ordered a " << bageltype[2] << endl;
            cout << "The total of your order is " << bagelprices[2] << " dollars" << endl;
            cout << "You have " << balance-bagelprices[2] << " dollars left on your balance" << endl; 
        }

    }
    else{
        cout << "alright have a good day" << endl;
    }




    return 0;
}