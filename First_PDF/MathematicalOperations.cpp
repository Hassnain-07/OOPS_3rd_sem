//Menu-Driven Mathematical Operations 
#include <iostream>
using namespace std;
 
int main(){
    int n,menu;
    cout<<"---Menu---"<<endl;
    cout<< "1. Factorial" <<endl;
    cout<< "2. Prime Number Check" <<endl;
    cout<< "3. Armstrong Number Check" <<endl;
    cout<< "4. Palindrome Number Check" <<endl;
    cout<< "5. Exit"<<endl;
    
    cout<<"Enter an option \n";
    cin>>menu;

    if(menu==5)
    {
    cout<<"Exiting program.... \n";
    return 0;
} 
    
    cout<<"Enter a number: ";
    cin>>n;

    switch (menu)
    {
    case 1:{
        long long factorial=1;
        for(int i=1;i<=n;i++){
        factorial=factorial * i;
        }
        cout<<"Factorial is: "<<factorial<<endl;
        break;}
    
    case 2:{
    bool prime = true;
        if (n <= 1) {
            prime = false;
        }
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
            prime = false;
        break;
            }
        }
            if (prime)
                cout << " Prime Number \n";
            else
                cout << " Not a Prime Number \n";
                break;
            }
        
     case 3:{
        int original = n;
        int sum = 0, digit;
        while (n > 0) {
        digit = n % 10;
        sum =sum+digit*digit*digit;
        n= n/10;

            }
            if(sum == original)
                cout << " Armstrong Number \n";
            else    
                cout << " Not an Armstrong Number \n";
                break;
             }

    case 4:{
        int original = n;
        int reverse = 0, digit;
        while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;}
            if(reverse==original)
                cout<<" Palindrome Number \n";
            else
                cout << " Not a Palindrome Number \n";
                break;
        }
    default:
    cout<<"Invalid option \n";
        break;
    }

    return 0;
}