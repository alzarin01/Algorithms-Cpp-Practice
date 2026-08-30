#include <iostream>
using namespace std;

void jobSequencing(char id[], int deadline[], int profit[], int n) {
    // Step 1: Sort jobs in decreasing order of profit using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (profit[j] < profit[j + 1]) {
               
                int tempProfit = profit[j];
                profit[j] = profit[j + 1];
                profit[j + 1] = tempProfit;
            
                int tempDeadline = deadline[j];
                deadline[j] = deadline[j + 1];
                deadline[j + 1] = tempDeadline;

                char tempId = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tempId;
            }
        }
    }

    // Step 2: Initialize slot array
    int slot[n];
    for (int i = 0; i < n; i++) {
        slot[i] = -1;
    }
    int totalProfit = 0;
    char jobSequence[n];
    int seqIndex = 0;

    // Step 3: Schedule jobs
    for (int i = 0; i < n; i++) {
        for (int j = min(deadline[i], n) - 1; j >= 0; j--) {
            if (slot[j] == -1) {
                slot[j] = i;                      // store index of job
                totalProfit += profit[i];
                jobSequence[seqIndex++] = id[i];
                break;
            }
        }
    }

    // Step 4: Output
    cout << "Job sequence: ";
    for (int i = 0; i < seqIndex; i++) {
        cout << jobSequence[i] << " ";
    }
    cout << "\nTotal Profit: " << totalProfit << endl;
}

int main() {
    int n;
    cout << "Enter number of jobs: ";
    cin >> n;

    char id[n];
    int deadline[n], profit[n];
    cout << "Enter Job ID, Deadline, and Profit for each job:\n";
    for (int i = 0; i < n; i++) {
        cin >> id[i] >> deadline[i] >> profit[i];
    }

    jobSequencing(id, deadline, profit, n);

    return 0;
}
