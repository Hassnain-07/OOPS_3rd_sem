// Triangle Validator and Type Checker
#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cout<<"Enter three sides: ";
    cin>>a>>b>>c;

    
    if (a+b<=c || a+c<=b || b+c<=a) {
        cout<<"Not a valid triangle";
    }
    else {
        
        if (a==b && b==c) {
            cout<<"Equilateral Triangle\n";
        }
        else if (a==b || b==c || a==c) {
            cout<<"Isosceles Triangle\n";
        }
        else{
            cout<<"Scalene Triangle\n";
        }

        
        if (a*a+b*b==c*c ||
            a*a+c*c==b*b ||
            b*b+c*c==a*a) {
            
            cout<<" and Right-angled Triangle\n";
        }
    }

    return 0;
}