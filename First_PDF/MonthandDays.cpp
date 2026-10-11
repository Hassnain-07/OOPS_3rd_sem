// Input month number (1–12) and year and check number of days
#include <iostream>
using namespace std;
 
int main(){
    int month,year;
    cout<<"Enter month: ";
    cin>>month;
    
    cout<<"Enter year: ";
    cin>>year;

    switch (month)
    {
    case 1:
        cout<<"January 31 Days\n";
    case 2:
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            cout << "29 days\n";
        else
            cout << "28 days\n";
            break;
    case 3:
        cout<<"March 31 Days\n";
    case 4:
        cout<<"April 30 Days\n";
    case 5:
        cout<<"May 31 Days\n";
    case 6:
        cout<<"June 30 Days\n";
    case 7:
        cout<<"July 31 Days\n";
    case 8:
        cout<<"August 31 Days\n";
    case 9:
        cout<<"September 30 Days\n";
    case 10:
        cout<<"October 31 Days\n";
    case 11:
        cout<<"November 30 Days\n";
    case 12:
        cout<<"December 31 Days\n";

        break;
    
    default:
    cout<<"Invalid month number\n";
        break;
    }

    
 
 
    return 0;
}