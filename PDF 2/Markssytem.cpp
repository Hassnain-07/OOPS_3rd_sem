//Input marks of 5 subjects, calculate total, average, and percentage, and assign a grade.
#include <iostream>
#include<string>
using namespace std;
 
int main(){
string subjects[5] = {"Maths", "English", "EVS", "SST", "Urdu"};
int marks[5];
int total=0;
float percentage,avg ;
for(int i=0;i<5;i++)
{
    cout<<"Enter marks for "<<subjects[i]<< ": ";
    cin>>marks[i];
    while (marks[i]<0 || marks[i]>100)
    {
        cout<<"Invalid marks! Enter marks between 0 and 100: ";
        cin>>marks[i];
    }
    total += marks[i];
}
percentage=(total/500.0)*100;
avg=total/5.0;

    cout<<"Total is: "<<total<<endl;
    cout<<"Average is: "<<avg<<endl;
    cout<<"Percentage is: "<<percentage<<" % "<<endl;

    if(percentage>=90)
        cout<<"Grade A (Distinction)\n";
    else if(percentage >= 75)
        cout << "Grade B (First)\n";
    else if (percentage >= 60)
        cout << "Grade C (Second)\n";
    else if (percentage >= 40)
        cout << "Grade D (Pass)\n";
    else
        cout << "Fail\n";

 
 
    return 0;
}