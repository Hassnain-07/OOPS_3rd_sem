//Write a program that accepts a single character as input.
// Use switch to classify it as a vowel,consonant,digit or special character.
#include <iostream>
#include <cctype>
using namespace std;
 
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    

    switch (ch)
    {
    //uppercase vowels
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout<<ch<<" is a Uppercase vowel"<<endl;
        break;
    //lowercase vowels
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<ch<<" is a Lowercase vowel"<<endl;
        break;
    //Digits
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        cout<<ch<<" is a Digit"<<endl;
        break;

        default:
        if(isalpha(ch)){
            cout<<ch<< " is consonant"<<endl;
        }
        else
        {
            cout<<ch<<" is special character"<<endl;
        }
        
        
        


    }
    return 0;
}