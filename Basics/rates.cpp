//In this program we will calculate the final price of an item after applying a discount and adding tax.
// The user will input the original price, the discount rate, and the tax rate. 
//The program will then compute the discounted price and the final price including tax, and display the result to the user. 
#include<iostream>
using namespace std;
int main(){
    float price;
    float discount;
    float tax;
    float discounted_price;
    float final_price;
    cout << "Enter the price of the item: ";
    cin >> price;
    cout << "Enter the discount rate (in percentage): ";
    cin >> discount;
    cout << "Enter the tax rate (in percentage): ";
    cin >> tax;
    discounted_price = price - (price * discount / 100);
    final_price = discounted_price + (discounted_price * tax / 100);
    cout << "The final price of the item is: " << final_price << endl;
}