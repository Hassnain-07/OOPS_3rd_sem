//factorial of a number using a loop
#include <iostream>
using namespace std;
 
int main(){
    int n;
    long long factorial=1;
    cout<<"Enter a Positive integer: "<<endl;
    cin>>n;

    if(n<0)
    {
        cout<<"Error! factorial of negative number doesnt exist"<<endl;
    }
    else{
        for(int i=1;i<=n;i++)
        factorial = factorial * i;
    }
    cout<<"Factorial of "<<n<<" = "<<factorial<<endl;



 
 
    return 0;
}