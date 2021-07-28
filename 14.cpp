//Porgram that show the age of a person in years, months, days and weeks based on the birth and current year.

#include <iostream>
#include <math.h>
using namespace std;

//function that calculates the age.
void calculateAge(int birthYear, int currentYear){
    int years, months, weeks, days;

    years = currentYear - birthYear;
    months = years * 12;
    weeks = months * 4 + 4;
    days = weeks * 7;

    cout << "Age in years = " << years << ".\n" << "Age in months = " << months << ".\n"
    << "Age in weeks = " << weeks << ".\n"<< "Age in days = " << days << ".\n";
}

int main(void){
    int birthYear, currentYear;

    cout << "Type your birth year.\n";
    cin >> birthYear;

    cout << "Type the current year.\n";
    cin >> currentYear;

    calculateAge(birthYear, currentYear);
    return 0;
}