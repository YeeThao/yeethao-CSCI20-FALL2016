// Yee Thao
// October 3, 2016

#include <iostream>
using namespace std;

int main() {
    
    int suzyAge = 25;
    int johnAge = 21;
    int x = 7;
    int y = 7;
    int a = 1;
    int b = 9;
    
    cout << "var suzyAge = 25" << endl;
    cout << "var johnAge = 21" << endl;
    
    if(suzyAge < johnAge){
         cout << "Suzy is older than John." << endl;
    }
    else{
        cout << "John is older than Suzy." << endl;
    }
    
    cout << "var x = 7" << endl;
    cout << "var y = 7" << endl;
    cout << "x >= y" << endl;
    
    if(x >= y){
        cout << "This statement is true because the conditions of being true is if x is equal to or greater than y." << endl;
    }
    else{
        cout << "This statement is false because x is neither equal to or greater than y." << endl;
    }
    
    
    cout << "var a = 1" << endl;
    cout << "var b = 9" << endl;
    cout << "a == b" << endl;
    
    if(a == b){
        cout << "This statement is true because variable a has the same value as variable b." << endl;
    }
    else{
    cout << "This statement is false because the value of a is not equal to the value of b." << endl;
    }
}