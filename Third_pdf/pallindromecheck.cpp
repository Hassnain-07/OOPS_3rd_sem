//Write a program to check if a number is a palindrome.
//Extend the program to print all palindrome numbers within a given range.
#include <iostream>
using namespace std;
 
int main(){
    int n;
    int start,end;
    cout<<"Enter a number: ";
    cin>>n;
    int original = n;
        int reverse = 0, digit;
        while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;}
            if(reverse==original)
                {cout<<" Palindrome Number \n";}
            else
                {cout << " Not a Palindrome Number \n";}

    //ENTER range
    cout<<" Enter range: ";
    cout<<"Start: ";
    cin>>start;
                
    cout<<"End: ";
    cin>>end;

    cout<<"Pallindrome numbers are: ";
    for(int i=start;i<=end;i++)
    {
        int temp=i;
        int rev=0;
        while(temp>0)
        {
            digit=temp%10;
            rev=rev * 10 + digit;
            temp=temp/10;
        
        }
        if(i==rev)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}