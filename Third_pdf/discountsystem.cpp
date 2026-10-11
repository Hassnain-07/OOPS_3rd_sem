// Assignment 8: Multi-Level Discount System
// Calculate total price after applying discount
// using nested conditional operators.
#include <iostream>
using namespace std;
int main()
{
    double purchase, discount, finalPrice;
    cout<<"Enter purchase amount: ";
    cin>>purchase;

    discount=(purchase<100) ?0 :
             (purchase<=500) ?10 :
             (purchase<=1000) ?15:20;
    finalPrice= purchase-(purchase*discount/100);

    cout<<"Discount: "<<discount<< "%"<<endl;
    cout<<"Final price: Rs "<<finalPrice<< endl;

    return 0;
}