//Input two digit and print it in words.
#include <iostream>
using namespace std;
 
int main(){
    int n,ones,tens;
    cout<<"Enter a two digit no:";
    cin>>n;
    if(n<10 || n>99)
    {
        cout<<"Invalid range\n";
    }
tens=n/10; //To get tens place number
ones=n%10;  //To get ones place number

//switch case for 10-19

switch(n)
    {
    case 10:
        cout<<"Ten\n";
        break;
    case 11:
        cout<<"Eleven\n";
        break;
    case 12:
        cout<<"Twelve\n";
        break;
    case 13:
        cout<<"Thirteen\n";
        break;
    case 14:
        cout<<"Fourteen\n";
        break;
    case 15:
        cout<<"Fifteen\n";
        break;
    case 16:
        cout<<"Sixteen\n";
        break;
    case 17:
        cout<<"Seventeen\n";
        break;
    case 18:
        cout<<"Eighteen\n";
        break;
    case 19:
        cout<<"Nineteen\n";
        break;}
//switchcase for tens
switch (tens)
    {
case 2: 
    cout<<"Twenty"; break;
case 3: 
    cout<<"Thirty"; break;
case 4: 
    cout<<"Forty"; break;
case 5: 
    cout<<"Fifty"; break;
case 6: 
    cout<<"Sixty"; break;
case 7: 
    cout<<"Seventy"; break;
case 8: 
    cout<<"Eighty"; break;
case 9: 
    cout<<"Ninety"; break;
}

if(ones !=0 && n>19){
cout<<" ";

//switchcase for ones
 switch(ones){
case 1: 
    cout<<"One\n"; break;
case 2:
    cout<<"Two\n"; break;
case 3: 
    cout<<"Three\n"; break;
case 4: 
    cout<<"Four\n"; break;
case 5: 
    cout<<"Five\n"; break;
case 6: 
    cout<<"Six\n"; break;
case 7: 
    cout<<"Seven\n"; break;
case 8: 
    cout<<"Eight\n"; break;
case 9: 
    cout<<"Nine\n"; break;
 }
}

 return 0;
}