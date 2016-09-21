//Yee Thao
//Sept. 18, 2016

#include <iostream>
using namespace std;

void PrintArt() {
    char artChar = '*';
    
    cout << "      " << artChar <<"  " << endl;
    cout << "    " << artChar << "   " << artChar << "    "<< endl;
    cout << "  " << artChar << "   " << artChar << "   " << artChar << endl;
    cout << artChar << "   " << artChar << "   " << artChar << "   " << artChar << " Copyright Yee Thao 2016" << endl;
    cout << "      " << artChar << endl;
    cout << "      " << artChar << endl;
    cout << "      " << artChar << endl;
    cout << "      " << artChar << endl;
    
}

int main() {
    PrintArt();
}