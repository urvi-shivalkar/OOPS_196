#include <iostream>
using namespace std;
int main() {
    int evenSum=0;
    int oddSum=0;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            evenSum +=i;
        } else {
            oddSum += i;
        }
    }
    cout << "Sum of even numbers between 1 and 50 is: " << evenSum << endl;
    cout << "Sum of odd numbers between 1 and 50 is: " << oddSum << endl;
    return 0;
}