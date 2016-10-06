// Yee Thao
// October 5, 2016

#include <iostream>
using namespace std;

class IncomeTax {
    private:
        string name;  // initializing variables that will be used in IncomeTax class
        string maritalStatus;
        double totalIncome;
        double withHeld;
        double tax;
        double amountOwed;
    public:
        IncomeTax(){ // "scrubs" variables so default of zero
            name = "Unknown";
            maritalStatus = "Unknown";
            totalIncome = 0;
            withHeld = 0;
            tax = 0;
            amountOwed = 0;
        }
        IncomeTax(string x, string y, double income, double held, double deterTax, double owed) { // give parameter to function
            name = x;
            maritalStatus = y;
            totalIncome = income;
            withHeld = held;
            tax = deterTax;
            amountOwed = owed;
        }
        void setName(string x); // Set variable name (A)
        void setMarStatus(string y); // Set variable marital status (B)
        void setTotalIncome(double income); // Set income (C)
        void setHeld(double held); // Set withheld cash (D)
        
        double getTotalIncome() const; // Allows access the value for total income (E)
        double getTax() const; // Determines tax depending on condition of marital status and allows access to value (F)
        double getTaxOwed() const; // Calculate tax owed or amount refund (G)
        double getWithHeld() const; // Allows access to value of amount withheld (H)
        double PrintRefund() const; // Prints out name, total tax owed, and tax owed or refund available (I)
};

void IncomeTax::setName(string x){ // (A)
    name = x;
    return;
}
void IncomeTax::setMarStatus(string y){ // (B)
    maritalStatus = y;
    return;
}
void IncomeTax::setTotalIncome(double income){ // (C)
    totalIncome = income;
    return;
}
void IncomeTax::setHeld(double held){ // (D)
    withHeld = held;
    return;
}

double IncomeTax::getTotalIncome() const{ // (E)
    return totalIncome;
}
    
double IncomeTax::getWithHeld() const{ // (H)
    return withHeld;
}



double IncomeTax::getTax() const{ // (F) Determines which category of taxes person will fall under
    if (maritalStatus == "single"){ // Tax category for "single"
        if (totalIncome <= 8925){
            return (totalIncome * 0.10);
        }
        else if (totalIncome <= 36250){
            return (892.50 + (0.15 * (totalIncome / 8925)));
        }
        else if(totalIncome <= 87850){
            return (4991.25 + (0.25 * (totalIncome / 36250)));
        }
        else if (totalIncome >= 87851){
            return (17891.25 + (0.28 * (totalIncome / 87850)));
        }
    }
    else{ // Tax category for "married"
        if (totalIncome <= 17850){
            return (totalIncome * 0.10);
        }
        else if (totalIncome <= 72500){
            return ((1785 * 2) + (0.15 * (totalIncome / 17850)));
        }
        else if (totalIncome >= 72501){
            return ((9982.50 * 2) + (0.28 * (totalIncome / 72500)));
        }
    }
}

double IncomeTax::getTaxOwed() const{ // (G) Determines if person will owe money or get refund
    if (getTax() > getWithHeld()){
        return (getTax() - getWithHeld()); // Calculate amount of tax owed remaining
    }
    else if (getTax() < getWithHeld()){
        return ((getWithHeld() - getTax()) * -1); // Calculate amount refund
    }
}

double IncomeTax::PrintRefund() const{ // (I)
    cout << "Name: " << name << endl;
    cout << "Total Adjusted Gross Income: $" << totalIncome << endl;
    cout << "Total Tax Owed: $" << getTax() << endl;
    if (getTaxOwed() > 0){
    cout << "Tax Owed: $" << getTaxOwed() << endl;
    }
    else if (getTaxOwed() < 0){
    cout << name << " is entitled to a REFUND of $" << (getTaxOwed() * -1) << endl;
    }
}



int main() {
    IncomeTax person1;
    string userInputS;
    double userInputD;
    
    cout << "Please enter the person's first name: " << endl;
    cin >> userInputS;
    person1.setName(userInputS);
    
    cout << "What is the marital status of the person? (single or married)" << endl;
    cin >> userInputS;
    person1.setMarStatus(userInputS);
    
    cout << "How much have the person made this year?" << endl;
    cin >> userInputD;
    person1.setTotalIncome(userInputD);
    
    cout << "How much income have been withheld for this year?" << endl;
    cin >> userInputD;
    person1.setHeld(userInputD);
    
    person1.PrintRefund();
}