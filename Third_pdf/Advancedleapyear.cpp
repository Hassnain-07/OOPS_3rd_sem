// Advanced Leap Year Checker
// Logic to print the next 5 leap years if the input year is not a leap year.

#include <iostream>
using namespace std;
int main()
{
    int year,count=0;
    bool leapYear=false;

    cout<< "Enter a year: ";
    cin>>year;

    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                leapYear= true;
            }
            else
            {
                leapYear= false;
            }
        }
        else
        {
            leapYear= true;
        }
    }
    else
    {
        leapYear= false;
    }

    if(leapYear)
    {
        cout<< "It is a leap year"<< endl;
    }
    else
    {
        cout<<"Not a leap year"<<endl;
        cout<<"Next 5 leap years are: \n";

        while(count<5)
        {
            year++;
            if(year%4==0)
            {   if(year%100==0)
                {   if(year%400==0)
                    {
                        cout<<year<<" ";
                        count++;
                    }
                }
                else
                {   cout << year << " ";
                    count++;
                    
                }
            }
        }
    }

    return 0;
}