//Largest and Smallest of Four Numbers
#include <iostream>
using namespace std;
 
int main(){
    int a,b,c,d;
    cout<<"Enter four numbers";
    cin>>a>>b>>c>>d;

    //For largest number
    if(a>b && a>c && a>d){
        cout<<a<<" is Largest and\n";
    }
    else if (b>a && b>c && b>d)
    {
        cout<<b<<" is Largest and\n ";
    }
    else if (c>a && c>b && c>d)
    {
        cout<<c<<" is Largest and\n ";
    }
    
    else {
        cout<<d<<" is largest and \n";
    }
    

    //For smallest number
    if(a<b && a<c && a<d){
        cout<<a<<" is smallest \n";
    }
    else if (b<a && b<c && b<d)
    {
        cout<<b<<" is smallest\n ";
    }
    else if (c<a && c<b && c<d)
    {
        cout<<c<<" is smallest\n ";
    }
    
    else {
        cout<<d<<" is smallest \n";
    }
 
 
    return 0;
}