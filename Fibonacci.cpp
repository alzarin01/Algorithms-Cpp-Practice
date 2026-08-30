#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number:";
    cin >> n;

    int f1 = 0, f2 = 1;

    for (int i = 0; i < n; i++) {
        cout << f1<< " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    return 0;
}

