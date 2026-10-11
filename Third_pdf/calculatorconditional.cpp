//Calculator with Conditional Operator
#include <iostream>
using namespace std;
 
int main(){
    int a,b;
    char op;
    cout<<"Enter first number: ";
    cin>>a;

    cout<<"+ (1)\n"<<"- (2)\n"<<"* (3)\n"<<"% (4)\n"<<"/ (5)\n"<<endl;
    cout<<"Enter the operation you want to perform: "<<endl;
    cin>>op;

    cout<<"Enter second number: ";
    cin>>b;

    if(op=='/' && b==0)
    {
        cout<<"Error! Division by zero not allowed."<<endl;
    }
    else
    {
         (op=='1')?cout<<"Result= "<<a+b<<endl
        :(op=='2')?cout<<"Result= "<<a-b<<endl
        :(op=='3')?cout<<"Result= "<<a*b<<endl
        :(op=='4')?cout<<"Result= "<<a%b<<endl
        :(op=='5')?cout<<"Result= "<<a/b<<endl
        :cout<<"Invalid operator "<<endl;
    }

    


 
 
    return 0;
}