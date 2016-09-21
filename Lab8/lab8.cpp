// Yee Thao
// Sept. 21, 2016

#include <iostream>
using namespace std;

double toKilo (double pounds) // Converts pound to kilo
{
    double kilo = pounds * .453592;
    return kilo;
}
double toPound (double kilogram) // Converts kilo to pound
{
    double pound = kilogram * 2.20462;
    return pound;
}

int main()
{
    int userInput;
    double inputPounds;
    double inputKilograms;
    
    cout << "Do you wish to convert from pounds to kilogram or from kilogram to pound?" << endl;
    cout << "For pounds to kilogram enter: 1. For kilograms to pounds enter: 2." << endl;
    cin >> userInput;
    
    if (userInput == 1){
        cout << "Please enter the amount of pounds you wish to convert to kilograms: " << endl;
    cin >> inputPounds;
    cout << inputPounds << "lbs converted to Kg is " << toKilo(inputPounds) << "kg" << endl; 
    }
    
    else {
    cout << "Please enter the amount of kilograms you wish to convert to pounds: " << endl;
    cin >> inputKilograms;
    cout << inputKilograms << "kg converted to pounds is " << toPound(inputKilograms) << "lbs" << endl;
    }
}
    