// Yee Thao
// October 17, 2016

#include <iostream>
using namespace std;

int main()
{
    //Get number of years
    int Y;
    cout << "How many years would you like to simulate?" << endl;
    cin >> Y;
    
    // Stimulate Y Years
    double B;
    for(int k = 0; k < Y; k++)
    {
        // Get payment amount & adjust balance
        double P;
        cout << "Payment for year " << k << " : " << endl;
        cin >> P;
        
        B = B + P;
        
        // Compute annual rate R
        int T = B/1000; // Get number of 1000's
        double R = 3 + (0.5 * T); // Compute rate
        
        if(R > 8.0) // Correct 8% cap
        {
            R = 8.0;
        }
        
        //Compute new balance with interest for the year
        double r = R/100;
        for(int i = 0; i < 12; i++)
        {
            B = B * (1 + (r/12));
        }
    }
    //Print final balance
    cout << "Final balance is " << B << " dollars." << endl;
}