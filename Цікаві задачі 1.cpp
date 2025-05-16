#include <iostream>
#include <vector>
using namespace std;

vector<tuple<int, int, int>> find_triples(int n) {
    vector<tuple<int, int, int>> triples;
    for (int a = 1; a <= n; ++a) {
        for (int b = 1; b <= n; ++b) {
            int c = a * a + b * b;
            if (c <= n) {
                triples.emplace_back(a, b, c);
            }
        }
    }
    return triples;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<tuple<int, int, int>> result = find_triples(n);
    for (const auto& triple : result) {
        cout << get<0>(triple) << " " << get<1>(triple) << " " << get<2>(triple) << endl;
    }
 }
    return 0;
 }
