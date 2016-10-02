#include <iostream>
using namespace std;

int main() {
    
    int inputCoins;
    int quarters;
    int dimes;
    int nickles;
    int pennies;
    long long totalCash;
    long long totalCashF;
    
    cout << "How many cents do you wish to convert today?" << endl;
    cin >> inputCoins;
    
    cout << "You entered: " << inputCoins << " cents" << endl;
    
    totalCash = (inputCoins / 100);
    totalCashF = (totalCash - (totalCash * 0.109));
    
    
    cout << "That was: " << endl;
    
    quarters = inputCoins / 25;
    inputCoins = inputCoins % 25;
    cout << quarters << " quarters" << endl;
    
    dimes = inputCoins / 10;
    inputCoins = inputCoins % 10;
    cout << dimes << " dimes" << endl;
    
    nickles = inputCoins / 5;
    inputCoins = inputCoins % 5;
    cout << nickles << " nickles" << endl;
    
    pennies =  inputCoins / 1;
    inputCoins = inputCoins % 1;
    cout << pennies << " pennies" << endl;
    
    cout << "With a total of $" << totalCash << ". After the fee, you get $" << totalCashF << endl;
}