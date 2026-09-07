#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int arr[100][100];
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i; space++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
           
            // The first and last numbers of every row are always 1
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            }
            // Other numbers = sum of the two numbers directly above it
            else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }

            cout << arr[i][j] << " ";
        }

        cout << endl; // Move to the next line
    }

    return 0;
}
