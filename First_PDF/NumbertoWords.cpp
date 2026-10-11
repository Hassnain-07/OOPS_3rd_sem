//Input a digit (0–9) and print it in words.
#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a digit(0-9): ";
    cin>>n;

    switch(n)
    {
    case 0:
        cout<<"zero\n";
        break;
    case 1:
        cout<<"One\n";
        break;
    case 2:
        cout<<"Two\n";
        break;
    case 3:
        cout<<"Three\n";
        break;
    case 4:
        cout<<"Four\n";
        break;
    case 5:
        cout<<"Five\n";
        break;
    case 6:
        cout<<"Six\n";
        break;
    case 7:
        cout<<"Seven\n";
        break;
    case 8:
        cout<<"Eight\n";
        break;
    case 9:
        cout<<"Nine\n";
        break;
    default:
    cout<<"Out of range\n";
        break;
    }
    
    
 
 
    return 0;
}