//Input a number and check whether it is even,odd or zero
#include <iostream>
using namespace std;
 
int main(){
    int n;
   cout<<"Enter a number:";
   cin>>n;

   if(n>0){
    if(n%2==0){
   
    cout<<"Number is positive even\n";
   }
   else{
    cout<<"Number is positive odd\n";
   }
}
if(n==0){
    cout<<"zero\n";
}

if(n<0){
    if(n%2==0){
   
    cout<<"Number is Negative even\n";
   }
   else{
    cout<<"Number is Negative odd\n";
   }
}
   
   

 
    return 0;
}
