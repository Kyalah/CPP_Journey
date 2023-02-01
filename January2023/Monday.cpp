#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<vector<string>> outfits;

    vector<string> sunnyOutfits;
    vector<string> rainyOutfits;
    vector<string> snowOutfits;

    bool isRaining = true;
    int temperature = 60;
    sunnyOutfits = {"Sunglasses","Hat","Shorts"}; //0
    rainyOutfits = {"Raincoat","Umbrella","Rainboots"}; //1 
    snowOutfits = {"Tims","Parka","Gloves"}; //2

    outfits.push_back(sunnyOutfits);
    outfits.push_back(rainyOutfits);
    outfits.push_back(snowOutfits); 

    cout << outfits[0][0]<< endl;

    isRaining = false;
    if(temperature >=60 && !isRaining ){
        for (string item : outfits[0]){
            cout << item << endl;  
        }      
    }
    isRaining = true;
    if(isRaining){
        for (string item : outfits[1]){
            cout << item << endl;   
        }
    }
}