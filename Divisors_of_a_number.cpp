#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Divisors: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    cout << count << endl;
    cout << "(";

    bool first = true;
    for (int i = 1; i<=n; i++) {
        if (n % i == 0) {
            if (!first) {
                cout << ", ";
            }
            cout << i;
            first = false;
        }
    } 
    cout << ")" << endl;

    return 0;
}
