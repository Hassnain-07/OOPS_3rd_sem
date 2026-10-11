//Input a number and calculate the sum of its digits.
#include <iostream>
using namespace std;
 
int main(){
    int n,digit,sum=0;
    cout<<"Enter a number: ";
    cin>>n;

    while(n!=0)
    {
        digit= n%10; //Get last digit
        sum += digit; //add digits to sum
        n=n/10; //Removes the last digit    
    }
    cout<<"Sum is : "<<sum<<endl;


 
 
    return 0;
}