//Create a program that generates a number pyramid
//Allow the user to input the number of rows.
#include <iostream>
using namespace std;
 
int main(){
    int r;
    cout<<"Enter number of rows: ";
    cin>>r;

    //printing space
    for(int i=1;i<=r;i++){
    
        for(int j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
    
    //printing increasing numbers
    for(int j=1;j<=i;j++)
        {
            cout<<j;
         }
    
    //printing decreasing numbers
    for(int j=i-1;j>=1;j--)
    {
        cout<<j;
    }
    cout<<endl;
}


 
 
    return 0;
}