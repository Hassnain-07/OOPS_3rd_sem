//Write a program that accepts a student’s marks in 5 subjects
//If the student fails in more than one subject, print "Repeat Year" regardless of percentage.
#include <iostream>
using namespace std;
 
int main(){
string subjects[5] = {"Maths", "English", "EVS", "SST", "Urdu"};
int marks[5];
int total=0;
int failedsubjects=0;
float percentage;

for(int i=0;i<5;i++)
{
    cout<<"Enter marks for "<<subjects[i]<<" : ";
    cin>>marks[i];
    while (marks[i]<0 || marks[i]>100)
    {
        cout<<"Invalid marks! Enter marks between 0 and 100: ";
        cin>>marks[i];
    }
    total += marks[i];
    if(marks[i]<40)
    {
        failedsubjects++;
    }
}
percentage= (total/500.0)*100;
cout<<"Percentage is: "<<percentage<<"%"<<endl;


if(failedsubjects>1)
{
    cout<<"Repeat year"<<endl;
}
else
{
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
}



 
 
    return 0;
}