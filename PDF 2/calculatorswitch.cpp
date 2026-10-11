//Calculator for addition,subtraction,multiplication,and division
#include <iostream>
using namespace std;
 
int main(){
    int a,b,menu;
    cout<<"__Choose Operation__"<<endl;
    cout<<"1. Addition "<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cin>>menu;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    switch (menu)
    {
    case 1:
        cout<<"Addition is "<<a+b<<endl;
        break;
    case 2:
        cout<<"Subtraction is "<<a-b<<endl;
        break;
    case 3:
        cout<<"Multiplication is "<<a*b<<endl;
        break;
    case 4:
        cout<<"Quotient is "<<a/b <<endl;
        cout<<"Remainder is "<<a%b <<endl;
        break;
    
    default:
    cout<<"Invalid option"<<endl;
        break;
    }

 
 
    return 0;
}