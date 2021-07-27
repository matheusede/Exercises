//Program that calculates the final price of a product after a 10% discount

#include <iostream>

using namespace std;

//Function that returns the final price.
float returnsFinalPrice(float initialPrice){
    return initialPrice *= 0.9;
}

int main (void){
    float initialPrice, result;

    cout << "Type the initial price of the product \n"; //First number
    cin >> initialPrice;

    result = returnsFinalPrice(initialPrice);

    cout << "The price of the product after the discount is $"<< result;

    return 0;
}