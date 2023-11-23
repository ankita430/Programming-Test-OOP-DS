#include <iostream>

using namespace std;

int main() {
    int m, n;

    cout << "Enter the number of rows (m): ";
    cin >> m;

    cout << "Enter the number of columns (n): ";
    cin >> n;

    int matrix[m][n];

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the center of the matrix
    int centerRow = m / 2;
    int centerCol = n / 2;

    // Create a matrix to store the point reflection
    int reflectedMatrix[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            reflectedMatrix[i][j] = matrix[(m - 1) - i][(n - 1) - j];
        }
    }

    cout << "Original matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Point reflection of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << reflectedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
