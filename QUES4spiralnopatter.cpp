#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of the pattern (n): ";
    cin >> n;
   
    int arr[20][20] = {0};  
    
    int value = 1;    
    int top = 0;      
    int bottom = n-1; 
    int left = 0;     
    int right = n-1;  
    
    while (value <= n*n) {
        for (int i = left; i <= right; i++) {
            arr[top][i] = value;
            value++;
        }
        top++;
        
        for (int i = top; i <= bottom; i++) {
            arr[i][right] = value;
            value++;
        }
        right--;

        for (int i = right; i >= left; i--) {
            arr[bottom][i] = value;
            value++;
        }
        bottom--;
        
        for (int i = bottom; i >= top; i--) {
            arr[i][left] = value;
            value++;
        }
        left++;
    }
   
    cout << "\nSpiral Pattern:\n" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}