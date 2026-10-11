//Mini ATM Simulation Maintain balance and update accordingly
#include <iostream>
using namespace std;
 
int main(){
    int menu;
    double balance=10000;
    double amount;

    cout<<"--Menu option--"<<endl;
    cout<<"1. Balance enquiry"<<endl;
    cout<<"2. Cash withdrawal"<<endl;
    cout<<"3. Cash deposit"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Choose an option from the menu: ";
    cin>>menu;

    switch (menu)
    {
    case 1:
        cout<<"Current balance is : "<<balance<<endl;
        break;
    case 2:
        cout<<"Enter withdrawal amount: ";
        cin>>amount;
         if(amount<=0){
            cout<<"Invalid amount\n ";
         }
         else if(amount>balance){
            cout<<"Insufficient Balance\n";
         }
         else{
            balance=balance - amount;
            cout<<"Withdrawal sucessfull"<<endl;
            cout<<"Remaining balance "<<balance<<endl;
         }
         break;
         case 3:
         cout<<"Enter deposit amount : "<<endl;
         cin>>amount;
          if(amount<=0){
            cout<<"invalid amount \n";}
           else {
            balance= balance + amount;
            cout<<"Deposit Successful"<<endl;
            cout<<"Updated Balance: "<<balance<<endl;
            }
          break;
        case 4:
        cout<<"Exiting ATM...."<<endl;
        return 0;
          
            default:
        cout<<"Invalid input ";
        break;
    }
    
    
    
 
 
    return 0;
}