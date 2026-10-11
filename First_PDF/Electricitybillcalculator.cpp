//Electricity Bill Calculator 
#include <iostream>
using namespace std;

int main() {
    float units, bill;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1.5;
    }
    else if (units <= 200) {
        bill = (100 * 1.5) + ((units - 100) * 2.5);
    }
    else {
        bill = (100 * 1.5) + (100 * 2.5) + ((units - 200) * 4.0);
    }

    // Add 10% surcharge if bill is greater than ₹500
    if (bill > 500) {
        bill = bill + (bill * 0.10);
    }

    cout << "Electricity Bill = Rs. " << bill << endl;

    return 0;
}