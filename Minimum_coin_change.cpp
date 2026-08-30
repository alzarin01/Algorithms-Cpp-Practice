#include <iostream>
using namespace std;

const int INF = 999999;

int coinChange(int coins[], int n, int amount, int choice[]) {
    int dp[10001];

    for (int i = 0; i <= amount; i++) {
        dp[i] = INF;
        choice[i] = -1;
    }
    dp[0] = 0; 

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= coins[j] && dp[i - coins[j]] + 1 < dp[i]) {
                dp[i] = dp[i - coins[j]] + 1;
                choice[i] = coins[j]; 
            }
        }
    }

    if (dp[amount] == INF) return -1;
    return dp[amount];
}


void printResult(int coins[], int n, int amount, int minCoins, int choice[]) {
    if (minCoins == -1) {
        cout << "Not possible to make amount " << amount << " with given coins.\n";
        return;
    }

    cout << "Target Amount: " << amount << endl;

    cout << "Available coins: ";
    for (int i = 0; i < n; i++) cout << coins[i] << " ";
    cout << endl;

    cout << "Minimum coins needed: " << minCoins << endl;

    int freq[10001] = {0};
    int x = amount;
    while (x > 0 && choice[x] != -1) {
        freq[choice[x]]++;
        x -= choice[x];
    }

    cout << "Coins used:\n";
    for (int i = 0; i < n; i++) {
        if (freq[coins[i]] > 0) {
            cout << coins[i] << " taken " << freq[coins[i]] << " times\n";
        }
    }
}

int main() {
    int n, amount;
    int coins[100], choice[10001];

    cout << "Enter number of coin types: ";
    cin >> n;

    cout << "Enter coin values: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    cout << "Enter target amount: ";
    cin >> amount;

    int minCoins = coinChange(coins, n, amount, choice);
    printResult(coins, n, amount, minCoins, choice);

    return 0;
}

