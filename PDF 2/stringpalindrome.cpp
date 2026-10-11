//Check if a string is a palindrome or not.
#include <iostream>
#include<string>
using namespace std;
 
int main(){
    string str;
    bool pallindrome=true;
    cout<<"Enter a string: ";
    cin>>str;
    
    int n= str.length();
        for(int i=0;i<n/2;i++)
        {
            if(str[i] != str[n-1-i])
            {
                pallindrome=false;
                break;
            }
        }
        if(pallindrome)
            cout<<"The string is pallindrome\n";
        else
            cout<<"The string is not pallindrome\n";
            
        

  
  

 
 
    return 0;
}