#include <iostream>
#include <string.h>
using namespace std;

#define m 4
#define n 2

int main() {
    int row, col;
    int M[3][3];

    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            M[row][col] = row+col;
            cout << M[row][col] << " ";
        }
    }

    return 0;
}