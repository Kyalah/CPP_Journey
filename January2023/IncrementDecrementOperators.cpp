#include <iostream>

using namespace std;

// increment operator ++
// decrement operator --

int main(){

int counter{10};
int result{0};

//Example 1 - simple increment
cout << "Counter: " << counter << endl;  //10

counter = counter + 1;
cout << "Counter: " << counter << endl;  //11

counter++;
cout << "Counter: " << counter << endl;  //12

++counter;
cout << "Counter: " << counter << endl;  //13

//Example 2 - preincrement
counter = 10;
result = 0;

cout << "Counter: " << counter << endl;

result = ++counter;   //note the preincrement
cout << "Counter: " << counter << endl;
cout << "Result: " << result << endl;

//Example 3 - post-increment
counter = 10;
result = 0;

cout << "Counter: " << counter << endl;

result = counter++;   //note the preincrement
cout << "Counter: " << counter << endl;
cout << "Result: " << result << endl;

//Example 4 
counter = 10;
result = 0;

cout << "Counter: " << counter << endl;

result = ++counter + 10;
cout << "Counter: " << counter << endl;
cout << "Result: " << result << endl;   //10+1=11 +10=21

cout << endl;
return {0};
}