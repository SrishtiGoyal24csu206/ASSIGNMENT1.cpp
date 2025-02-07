#include <iostream>
using namespace std;

int main() {
    int size = 3; // Size of the matrix (3x3)
    int matrix[3][3];
    
    // Input the matrix
    cout << "Enter the elements of 3x3 matrix:" << endl;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    // Print original matrix
    cout << "\nOriginal Matrix:" << endl;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // Create a new matrix for rotated result
    int rotated[3][3];
    
    // Rotate the matrix
    // New position: row becomes col, col becomes (size-1-row)
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            rotated[j][size-1-i] = matrix[i][j];
        }
    }
    
    // Print rotated matrix
    cout << "\nMatrix after 90 degree rotation:" << endl;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}