// Yee Thao
// November 21, 2016
/* This program is suppose to help a person create a username by randomizing
   the user's input for the first name and the last name based on some requirements*/
   
#include <iostream>
#include <cstring>
using namespace std;


int main(){
    char firstName[10];
    char lastName[20];
    char userNameOption1[30];
    char userNameOption2[30];
    char userNameOption3[30];
    
    cout << "Enter your first name. (Up to 10 characters only)" << endl; // Prompts user for first name
    cin >> firstName;
    while(strlen(firstName) > 10){ // Tests user input is 10 characters or less
        cout << "The first name entered is greater that 10 characters." << endl;
        cout << "Please enter another name: " << endl;
        cin >> firstName;
        
    }
    
    cout << "Enter your last name. (Up to 20 characters only)" << endl; // Prompts user for last name
    cin >> lastName;
    while(strlen(lastName) > 20){ // Tests user input is 20 characters or less
        cout << "The last name you entered is greater than 20 characters." << endl;
        cout << "Please enter another name: " << endl;
        cin >> lastName;
    }
    
    for(int i = 0; i < 30; i++){ // Creates a user name that contains first two character of first name and all of last name
        
        if(i > 1){
           userNameOption1[i] = tolower(lastName[i - 2]);
        }
        else{
            userNameOption1[i] = tolower(firstName[i]);
        }
    }
    
    for(int i = 0; i < 30; i++){ // Creates user name that contains first letter of first name and last name
        
        if(i > 0){
            userNameOption2[i] = tolower(lastName[i - 1]);
        }
        else{
            userNameOption2[i] = tolower(firstName[i]);
        }
    }
    
    for(int i = 0; i < 30; i++){ // Creates user name that contains both complete first name and last name
        
        if(i >= strlen(firstName)){
            userNameOption3[i] = tolower(lastName[i - strlen(firstName)]);
        }
        else{
            userNameOption3[i] = tolower(firstName[i]);
        }
    }

    cout << "You can choose from these three user names: " << endl;   
    cout << userNameOption1 << endl;
    cout << userNameOption2 << endl;
    cout << userNameOption3 << endl;
}