//Program that converts Celsius to Fahrenheit;

#include <iostream>
#include <math.h>
using namespace std;

//Temperature converter
void temperatureConverter(float celsius){
    cout << celsius << " °C" << " = " << (180*(celsius + 32)/100) << "°F";
}

int main (void){
    float celsius;

    cout << "Type any temperature in celsius.\n";
    cin >> celsius;

    temperatureConverter(celsius);

    return 0;
}