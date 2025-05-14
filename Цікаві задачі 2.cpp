#include <iostream>
#include <vector>
using namespace std;

void print_pascals_triangle(int n) {
    vector<vector<int>> triangle(n);
    
    for (int i = 0; i < n; ++i) {
        triangle[i].resize(i + 1, 1);
        for (int j = 1; j < i; ++j) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    
    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    print_pascals_triangle(n);
    return 0;
}
