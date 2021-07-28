//Program that calculates how many minimum wages a person salary has.

#include <iostream>
#include <math.h>
using namespace std;

//Brazilian minimum wage = R$ 1100,00
void calculateMinimumWages(float salary){
    cout << "Salary = " << salary / 1100 << " minimum wages.\n";
}

int main(void){
    int salary;

    cout << "Type your salary.\n";
    cin >> salary;

    calculateMinimumWages(salary);

    return 0;
}