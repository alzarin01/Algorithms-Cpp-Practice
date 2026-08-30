#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++){
            if (n % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
    return 0;
}
