//Write a program to solve a quadratic equation (ax^2+bx+c=0).
#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    double a,b,c;
    cout<<"Enter coefficients a,b,c: ";
    cin>>a>>b>>c;
    //conditional operator for non-zero a
(a==0)?(cout<<"Error: 'a' cannot be zero. Not a quadratic equation.\n"):(cout << "");
double D= b*b-4*a*c;

if(D>0)
{   double root1=(-b+sqrt(D)/2*a);
    double root2=(-b-sqrt(D)/2*a);
        cout<<"Roots are real and distinct"<<endl;
        cout<<root1<<endl;
        cout<<root2<<endl;
}   else {
    if(D==0){
    double root=(-b/(2*a));
        cout<<"Roots are real and equal"<<endl;
        cout<<root<<endl;
    } else{
    double realpart= -b/(2*a);
    double imagpart= sqrt(-D)/(2*a);
        cout<<"Roots are imaginary (complex)."<<endl;
        cout<<"Root 1 = "<<realpart<<" + "<<imagpart<<"i"<<endl;
        cout<<"Root 2 = "<<realpart<< " - "<<imagpart<<"i"<<endl;
    }

        
    

}




 
 
    return 0;
}