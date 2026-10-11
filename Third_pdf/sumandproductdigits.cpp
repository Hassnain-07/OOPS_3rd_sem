////Input a number and calculate the sum of its digits.
//Extend it to find the product of digits as well.
#include <iostream>
using namespace std;
 
int main(){
    int n,digit,sum=0,product=1;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n;

    while(temp!=0)
    {
        digit= temp%10; //Get last digit
        sum += digit; //add digits to sum
        temp=temp/10; //Removes the last digit    
    }
    cout<<"Sum is : "<<sum<<endl;

    temp=n;
    while(temp!=0)
    {
        digit= temp%10; //Get last digit
        product = product * digit; //multiply products to digits.
        temp=temp/10; //Removes the last digit    
    }
    cout<<"Product is: "<<product<<endl;



 
 
    return 0;
}