#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    float a, b, h;
    cout << "Enter the two parallel sides and the height: ";
    cin >> a >> b >> h;

    float area = ((a+b)*h)/2;

    printf("Area: %.2f\n", area);

    return 0;
}

