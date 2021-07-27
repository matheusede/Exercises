//Program that receives two numbers and divides the first with the second one.

#include <iostream>

using namespace std;

//Function that returns the division between the two numbers
float divideNumbers(int n1, int n2){
    return n1 / n2;
}

int main (void){
    float n1, n2, result;

    cout << "Type any number \n"; //First number
    cin >> n1;

    cout << "Type any number \n"; //Second number
    cin >> n2;

    result = divideNumbers(n1, n2);

    cout << n1 << " / " << n2 << " is equal to " << result;

    return 0;
}