// Yee Thao
// October 11, 2016

#include <iostream>
#include <ctime>
using namespace std;



int main()
{
  int startHour, startMin;
  int endHour, endMin;
  char c;
  
  cout << "Enter in a starting hour in (HH:MM) format." << endl;
  cin >> startHour >> c >> startMin;
  
  cout << "Enter in a ending hour in (HH:MM) format." << endl;
  cin >> endHour >> c >> endMin;
  
  while(startMin < endMin)
  {
  startMin = startMin + 1;
  
    if((startHour != endHour) && (startMin == endMin))
    {
        startHour = 2;
        startMin = 0;
    }
    if(startMin < 10){
        cout << startHour << ":0" << startMin << endl; 
    }
    else
    {
        cout << startHour << ":" << startMin << endl;
  
    }
  }
  
  cout << "Enter another starting hour in (HH:MM) format." << endl;
  cin >> startHour >> c >> startMin;
  
  cout << "Enter another ending hour in (HH:MM) format." << endl;
  cin >> endHour >> c >> endMin;
  
  while(startMin < endMin)
  {
    startMin = startMin + 15;
    
        if((startHour != endHour) && (startMin == 60))
        {
                startHour = 2;
                startMin = 0;
        }
        if(startMin < 10)
        {
            cout << startHour << ":0" << startMin << endl;
        }
        else
        {
        cout << startHour << ":" << startMin << endl;
        }
  }
  
}