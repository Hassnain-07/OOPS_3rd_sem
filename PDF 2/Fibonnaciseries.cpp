//Print the Fibonacci series up to n terms.
#include <iostream>
using namespace std;
 
int main(){
    int n;
    int a=0,b=1,next;

    cout<<"Enter number of terms: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<a<<" \n";
        next= a+b;
        a = b;
        b = next;

    }



    
 
 
    return 0;
}