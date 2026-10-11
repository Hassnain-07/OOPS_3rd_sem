//Find the largest number among n elements in an array.
#include <iostream>
using namespace std;
 
int main(){
    int arr[100],n,i;

    cout<<"Enter number of elements for array: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for (i=0;i<n;i++)
    cin>>arr[i];

    int largest= arr[0]; 
    for( i=0;i<n;i++)
    {
        if(arr[i]>largest)
    {
        largest = arr[i];
    }
    }
    cout<<"Largest element is: "<<largest<<endl;

    


 
    return 0;
}