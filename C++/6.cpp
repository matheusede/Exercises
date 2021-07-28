//Program that receives the base income from a employee and calculates the final payment, including 4% of the value of the sales.

#include <iostream>

using namespace std;

//Function that calculates the final payment
float finalPayment(float basePayment, float salesValue){
    return (basePayment + (salesValue * 0.04));
}

int main(void){
    float basePayment, salesValue, finalSalary;

    cout << "Type the value of the employee's base salary.\n";
    cin >> basePayment;

    cout << "Type the value of the employee's sales.\n";
    cin >> salesValue;

    finalSalary = finalPayment(basePayment, salesValue);

    cout << "The final salary is $" << finalSalary;
    return 0;
}