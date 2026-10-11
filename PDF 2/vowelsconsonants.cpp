//Input a string and count the number of vowels and consonants.
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string str;
    int vowels=0,consonants=0;
    cout<<"Enter a string: ";
    cin>>str;

    int n= str.length();
    for(int i=0;i<n;i++)
    {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
    str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    
        vowels++;
    
    else
    {
        consonants++ ;
    }
}
    cout<<"Number of vowels: "<<vowels<<endl;
    cout<<"Number of Consonants: "<<consonants<<endl;

 
 
    return 0;
}