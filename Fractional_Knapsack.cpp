
#include <iostream>
using namespace std;

void fractionalKnapsack(int n, float weight[], float value[], float capacity) {
    // Step 1: Calculate ratio (value-to-weight)
    float ratio[n];
    for (int i = 0; i < n; i++) {
        ratio[i] = value[i] / weight[i];
    }

    // Step 2: Sort by ratio in descending order using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {
                
                float tempR = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = tempR;

                
                float tempW = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = tempW;

            
                float tempV = value[j];
                value[j] = value[j + 1];
                value[j + 1] = tempV;
            }
        }
    }

    // Step 3: Apply Fractional Knapsack logic
    float totalValue = 0;
    for (int i = 0; i < n; i++) {
        if (weight[i] <= capacity) {
            // Take whole item
            totalValue += value[i];
            capacity -= weight[i];
        } else {
            // Take fraction of item
            totalValue += value[i] * (capacity / weight[i]);
            break;
        }
    }

    // Step 4: Output result
    cout << "Maximum value in knapsack = " << totalValue << endl;
}

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    float weight[n], value[n], capacity;
    cout << "Enter weight and value for each item:\n";
    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
    }

    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    fractionalKnapsack(n, weight, value, capacity);

    return 0;
}
