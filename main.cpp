#include <iostream>
using namespace std;

// Define constants for matrix dimensions
const int M = 3;  // Number of rows
const int N = 3;  // Number of columns

// Function to point reflection of the matrix around the center
void pointReflection(int mat[M][N]) {
    // Simply print from last cell to first cell.
    for (int i = M - 1; i >= 0; i--) {
        for (int j = N - 1; j >= 0; j--)
            cout << mat[i][j] << " ";

        cout << endl;
    }
}

// Driven code
int main() {
    int mat[M][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    pointReflection(mat);
    return 0;
}