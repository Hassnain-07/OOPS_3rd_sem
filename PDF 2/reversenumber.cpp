//Read an integer and print its reverse.
#include <iostream>
using namespace std;
 
int main(){
    int n,reverse=0,digit;
    cout<<"Enter an integer: ";
    cin>>n;

    while(n!=0)
    {
        digit=n%10; //gets last digit
        reverse= reverse * 10 + digit; //builds reverse
        n= n/10; //removes last digit
    }
    cout<<"Reverse is: "<< reverse<<endl;



 
 
    return 0;
}