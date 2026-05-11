#include <iostream>
using namespace std;

void processArray(int r, int c) {
    int arr[r][c];

    cout << "Enter " << r * c << " integer number: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    int maxVal = arr[0][0];
    int location = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                location = i * c + j;
            }
        }
    }

    cout << "\nMax Value = " << maxVal << "\nLocation = " << location;
    cout << "\n\nNum\tDiff_from_Max\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << "\t      " << abs(arr[i][j] - maxVal) << endl;
        }
    }

}

int main() {
    int r, c;

    cout << "Enter the array row: ";
    cin >> r;

    cout << "Enter the array column: ";
    cin >> c;

    processArray(r, c);
}