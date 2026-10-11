//Input annual income and Display taxable income and tax amount
#include <iostream>
using namespace std;
 
int main(){
    float income;
    cout<<"Enter income: ";
    cin>>income;

    if(income<=250000){
        cout<<income ;
        cout<<" No Tax\n";
    }   
    else if(income>= 250000 && income <=500000){
        cout<<"Tax amount is "<<income * 0.05<<endl;
        cout<<"Taxable income is "<<income - (income * 0.05)<<endl;

    }
    else if(income>= 500001 && income <=1000000){
        cout<<"Tax amount is "<<income * 0.2<<endl;
        cout<<"Taxable income is "<<income - (income * 0.2)<<endl;
    }
    else if(income> 1000000 ){
        cout<<"Tax amount is "<<income * 0.3<<endl;
        cout<<"Taxable income is "<<income - (income * 0.3)<<endl;
    }

    return 0;
}