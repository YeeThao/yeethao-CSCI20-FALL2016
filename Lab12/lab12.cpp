// Yee Thao 
// October 10, 2016 

#include <iostream>
using namespace std;

int main() {
    
    char userInputS;
    int userInputI;
    // int y = 1;
    // int n = 0;
    
    cout << "How old are you?" << endl;
    cin >> userInputI;
    
    if (userInputI < 10){
        cout << "You are a grade schooler." << endl;
    }
    else if (userInputI < 15) {
        cout << "You are a middle schooler." << endl;
    }
    else if (userInputI < 18) {
        cout << "You are a high schooler." << endl;
    }
    else {
        cout << "Are you still pursuing education? Enter 'y' for yes or 'n' for no." << endl;
        cin >> userInputS;
        switch (userInputS){
            case 'y':
                cout << "Do you have a field that you are set in pursuing? Enter 'y' for yes or 'n' for no." << endl;
                cin >> userInputS;
                switch (userInputS){
                    case 'y':
                        cout << "Are you interested in: 1. Mathematics, 2. Language Arts, 3. History, 4. Science. Enter the number corresponding with your choice." << endl;
                        cin >> userInputI;
                        switch (userInputI){
                            case 1:
                                cout << "Mathematics can be implemented into many fields and can overlap with Science. Have fun!" << endl;
                                break;
                            case 2:
                                cout << "Language Arts is a very broad spectrum that can lead to many creative or exciting things like being an author or a news writer." << endl;
                                break;
                            case 3:
                                cout << "History is a very interesting field because you can use what you learn from the past to determine what could happen in the future. This can also overlap with the study of human culture." << endl;
                                break;
                            case 4:
                                cout << "Science is alse a very broad spectrum that involves discovering or studying how the universe works. A few fields under this spectrum is chemistry, anatomy, physics, and biology." << endl;
                                break;
                        }
                    case 'n' :
                        cout << "You have a whole life ahead of you. Continue to search it is never too late!" << endl;
                        break;
                }
                break;
            case 'n':
                cout << "Are you currently working? Enter 'y' for yes or 'n' for no." << endl;
                cin >> userInputS;
                switch (userInputS){
                    case 'y':
                        cout << "Are you currently working for a company or are you self employed? Enter 1 for former or 2 for latter." << endl;
                        cin >> userInputI;
                        switch (userInputI){
                            case 1:
                                cout << "Do you plan on advancing up in the company? Enter 'y' for yes or 'n' for no." << endl;
                                cin >> userInputS;
                                    switch (userInputS){
                                        case 'y':
                                            cout << "Good luck on your endeavor, there are many competitors but do not give up!" << endl;
                                            break;
                                        case 'n':
                                            cout << "Are you satisfied with where you are? Enter 'y' for yes or 'n' for no." << endl;
                                            cin >> userInputS;
                                            switch (userInputS){
                                                case 'y':
                                                    cout << "Leading a simple life is not bad either as long as you are happy." << endl;
                                                    break;
                                                case 'n':
                                                    cout << "Dream bigger and take chances!" << endl;
                                                    break;
                                            }
                                            break;
                                    }
                                break;    
                            case 2:
                                cout << "You have big aspirations good luck on your endeavor!" << endl;
                                break;
                        }
                        break;
                    case 'n':
                        cout << "You are currently unemployed." << endl;
                        break;
                }
                break;
        }
    }
}