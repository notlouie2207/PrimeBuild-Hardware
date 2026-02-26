#include <iostream>
using namespace std;

int main() {
    int arrRows, arrColumns;

    cout << "How many rows to input?? ";
    cin >> arrRows;

    cout << "How many columns to input?? ";
    cin >> arrColumns;

    int arr[arrRows][arrColumns];

    for (int i = 0; i < arrRows; i++) {
        for (int j = 0; j < arrColumns; j++) {
            cout << "Enter a number: [" << i+1 << "][" << j+1 << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "\nThe numbers are: \n";
     for (int i = 0; i < arrRows; i++) {
        for (int j = 0; j < arrColumns; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    int highestValue = arr[0][0], lowestValue = arr[0][0];
    for (int i = 0; i < arrRows; i++) {
        for (int j = 0; j < arrColumns; j++) {
            if (arr[i][j] > highestValue) {
                highestValue = arr[i][j];
            }
            if (arr[i][j] < lowestValue) {
                lowestValue = arr[i][j];
            }
        }
    }

    cout << "\nThe highest number is: " << highestValue << endl;
    cout << "The lowest number is: " << lowestValue << endl;

    return 0;
}