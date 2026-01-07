#include <iostream>
#include <iomanip>  
#include "mytemperature.h"

using namespace std;

int main() {
    cout << fixed << left;

  
    cout  << "Celsius"<<"\t"
        << "Fahrenheit"    
        << "|"                      
        << "Fahrenheit"  <<"\t" 
         << "Celsius" << endl; 

    
    double cel_start = 40.0;   
    double fah_start = 120.0;  
    for (int i = 0; i < 10; i++) {
        
        double cel_to_fah = celsius_to_fah(cel_start);
        double fah_to_cel = fahrenheit_to_cels(fah_start);

        
        cout << setprecision(1) << cel_start << "\t"
             << setprecision(1) << cel_to_fah << "\t"
            << "|   "
            << setprecision(1) << fah_start << "\t"
            << setprecision(2) << fah_to_cel << endl;        
        
        cel_start -= 1.0;
        fah_start -= 10.0;
    }

    return 0;
}