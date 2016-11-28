#include <iostream>
using namespace std;

class TemperatureConverter
{
    private:
        double kelvin_;
        
    public:
        TemperatureConverter() {
            kelvin_ = 0;
        }
        TemperatureConverter(double kelvin) {
            kelvin_ = kelvin;
        }
        void SetTempFromKelvin (double kelvin);
        void SetTempFromCelcius (double kelvin);
        void SetTempFromFahrenheit (double kelvin);
        
        double GetTempFromKelvin() const;
        double GetTempFromCelcius() const;
        double GetTempFromFahrenheit() const;
        double GetTempAsKelvin() const;
        double GetTempAsCelcius() const;
        double GetTempAsFahrenheit() const;
        double PrintTemps() const;
};


void TemperatureConverter::SetTempFromKelvin(double kelvin) {
    kelvin_ = kelvin;
    //return;
}
void TemperatureConverter::SetTempFromCelcius(double kelvin) {
    kelvin_ = (kelvin + 273.15) ;
    //return;
}
void TemperatureConverter::SetTempFromFahrenheit(double kelvin) {
    kelvin_ = (5 * ((kelvin - 32) / 9));
    //return;
}

double TemperatureConverter::GetTempFromKelvin() const {
    return kelvin_;
}
double TemperatureConverter::GetTempAsKelvin() const {
    return kelvin_;
}
double TemperatureConverter::GetTempAsCelcius() const {
    return (kelvin_ - 273.15);
}
double TemperatureConverter::GetTempAsFahrenheit() const {
    return (((kelvin_ - 273.15) * 9) / 5 + 32);
}

double TemperatureConverter::PrintTemps() const {
    cout << GetTempAsCelcius() << " Celcius" << endl;
    cout << GetTempAsFahrenheit() << " Fahrenheit" << endl;
    cout << GetTempAsKelvin() << " Kelvin" << endl;
}


int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemps();
    temp2.PrintTemps();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemps();
    
    temp2.SetTempFromCelcius(32); //testing other functions
    cout<<temp2.GetTempAsCelcius()<<endl;
    temp2.PrintTemps();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemps();
    
    return 0;
}