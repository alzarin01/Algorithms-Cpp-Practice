#include <iostream>
using namespace std;

bool isPrime(int num){
    if (num <= 1) return false;
    for (int i = 2; i * i<= num; i++){
        if (num % i ==0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cout << "Enter a number to find the sum of its prime factors: ";
    cin >> n;

    int sum = 0;
    cout << "\nPrime factors: ";

    bool first = true;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            if (!first){
            cout<<", ";
            }
            cout << i;
            sum += i;
            first = false;
        }
    }
    cout <<"\nSum = "<< sum << endl;

    return 0;
}
