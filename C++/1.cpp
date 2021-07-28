//Program to calculate the subtraction between the first and second input
#include <iostream>

using namespace std;

//Function to subtract
float subtractNumbers(float n1, float n2){
    return n1 - n2;
}

int main (void){
    float n1, n2, result;

    cout << "Type any number \n"; //First number
    cin >> n1;

    cout << "Type any number \n"; //Second number
    cin >> n2;

    result = subtractNumbers(n1, n2);

    cout << n1 << " - " << n2 <<" is equal to " << result;

    return 0;
}