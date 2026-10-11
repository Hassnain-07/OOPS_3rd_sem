//Check whether a given number is prime or not.
#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool prime = true;
        if (n <= 1) {
            prime = false;
        }
        for (int i = 2; i < n; i++) 
            if (n % i == 0) {
            prime = false;
            }
            
             if (prime)
            {
                cout << " Prime Number \n";
            }
            else
                {
                    cout << " Not a Prime Number \n";
                }

 
 
    return 0;
}