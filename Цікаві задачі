#include <iostream>
#include <vector>
using namespace std;

void prime_factorization(int n) {
    cout << n << " = ";
    bool first = true;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            if (!first) cout << ", ";
            cout << i;
            n /= i;
            first = false;
        }
    }
    if (n > 1) {
        if (!first) cout << ", ";
        cout << n;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime_factorization(n);
    return 0;
}
