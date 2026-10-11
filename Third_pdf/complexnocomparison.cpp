//Write a program that accepts two complex numbers and compares them.
#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    double r1,i1,r2,i2;

    cout<<"Enter the real and imaginary part of first no: ";
    cin>>r1>>i1;

    cout<<"Enter the real and imaginary part of Second no: ";
    cin>>r2>>i2;

    double magnitude1= sqrt(r1*r1+i1*i1);
    double magnitude2= sqrt(r2*r2+i2*i2);

    if(magnitude1>magnitude2)
    {
        cout<<"First complex is greater"<<" \nMagnitude is: "<<magnitude1<<endl;
    }
    else if(magnitude1<magnitude2)
    {
        cout<<"Second complex is greater"<<" \nMagnitude is: "<<magnitude2<<endl;
    }
    else
    {
        cout<<"Both complex are equal"<<endl;
    }

    return 0;
}

