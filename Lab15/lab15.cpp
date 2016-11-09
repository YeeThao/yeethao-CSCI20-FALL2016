// Yee Thao
// October 26, 2016

#include <iostream>
using namespace std;

int main(){
    string menuMeal[5] = {"Fillet Mignon", "Baked Coconut Salmon Fillet", "Grilled Steak and Cheese Sandwich", 
                            "Escargot Platter", "Stuffed Chicken Breast"};
    string menuApp[2] = {"Onion Rings", "Boneless Chicken Wings"};
    string menuDrink[3] = {"Water", "Soft Drink", "Alcohol"};
    
    int userInputApp, userInputMeal, userInputDrink;
    int numApp, numMeal, numDrink;
    string AppOrder, MealOrder, DrinkOrder;
    string userYN;
    
    cout << "Here is our menu. For appetizers we have:" << endl;
    for(int i = 0; i < 2; i++){
        cout << i + 1 << ". " << menuApp[i] << endl;
    }
    
    cout << " " << endl;
    cout << "For our main dishes we have:" << endl;
    for(int i = 0; i < 5; i++){
        cout << i + 1 << ". " << menuMeal[i] << endl;
    }
    
    cout << " " << endl;
    cout << "And for our beverages we have:" << endl;
    for(int i = 0; i < 3; i++){
        cout << i + 1 << ". " << menuDrink[i] << endl;
    }
    
    cout << "What would you like for appetizers?" << endl;
    cin >> userInputApp;
    switch(userInputApp){
        case 1:
            AppOrder = menuApp[0];
            break;
        case 2:
            AppOrder = menuApp[1];
            break;
        default:
            AppOrder = "No Appetizers";
            break;
    }
    if(userInputApp > 0){
        cout << "How many will that be?" << endl;
        cin >> numApp;
        
        cout << "So that'll be " << numApp << " serving of " << AppOrder << " correct?" << endl;
        cin >> userYN;
        if(userYN == "yes"){
            cout << "What would you like for the main dish?" << endl;
            cin >> userInputMeal;
            switch(userInputMeal){
                case 1:
                    MealOrder = menuMeal[0];
                    break;
                case 2:
                    MealOrder = menuMeal[1];
                    break;
                case 3:
                    MealOrder = menuMeal[2];
                    break;
                case 4:
                    MealOrder = menuMeal[3];
                    break;
                case 5:
                    MealOrder = menuMeal[4];
            }
            cout << "And how many will that be?" << endl;
            cin >> numMeal;
            
            cout << "So that will be " << numMeal << " serving of " << MealOrder << " correct?" << endl;
            cin >> userYN;
            if(userYN == "yes"){
                cout << "And what would you like to have for a drink?" << endl;
                cin >> userInputDrink;
                switch(userInputDrink){
                    case 1:
                        DrinkOrder = menuDrink[0];
                        break;
                    case 2:
                        DrinkOrder = menuDrink[1];
                        break;
                    case 3:
                        DrinkOrder = menuDrink[2];
                }
                cout << "And how many will that be?" << endl;
                cin >> numDrink;
                
                cout << "So that'll be " << numApp << " serving of " << AppOrder << ", " << numMeal << " " << MealOrder << ", and " << numDrink << " " << DrinkOrder << " correct?" << endl;
                
            }
        }
        else{
            cout << "What else would you like to add to the appetizers?" << endl;
            cin >> userInputApp;
            switch(userInputApp){
                case 1:
                    AppOrder = menuApp[0];
                    break;
                case 2:
                    AppOrder = menuApp[1];
                    break;
            }
            
            
        }
        
    }
    
    
    
}