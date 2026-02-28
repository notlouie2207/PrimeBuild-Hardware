#include <iostream>
using namespace std;

int main() {
    int rowCount, colCount, highest, lowest;
    cout << "How many rows to input?? ";
    cin >> rowCount;
    cout << "How many columns to input?? ";
    cin >> colCount;
    
    int arr[rowCount][colCount];
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            cout << "Enter a number: [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    
    cout << "The numbers are: " << endl;
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    highest = arr[0][0]; 
    lowest = arr[0][0];
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            if (arr[i][j] > highest) {
              highest = arr[i][j];
            }
            if (arr[i][j] < lowest) {
              lowest = arr[i][j];
            }
        }
    }
    
    cout << "\nThe highest number is: " << highest << endl;
    cout << "The lowest number is: " << lowest << endl;
    
    return 0;
}