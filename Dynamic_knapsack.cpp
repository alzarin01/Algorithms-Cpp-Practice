
#include <iostream>
using namespace std;

void knapsack(int wt[], int P[], int n, int m){
    int k[n+1][m+1];
        for (int i = 0; i <= n; i++){
            for (int w = 0; w <= m; w++){
                if (i == 0 || w == 0){
                    k[i][w] = 0;
                }
                else if(wt[i-1] <= w){
                    k[i][w] = max(k[i-1][w], P[i-1] + k[i-1][w - wt[i-1]]);
                }
                else{
                    k[i][w] = k[i-1][w];
                }
            }
        }

    cout<< "Maximum profit = " << k[n][m] << endl;
        int w = m;
    cout << "Selected items: ";
        for (int i = n; i > 0; i--){
            if (k[i][w]!=k[i-1][w]){
                cout <<i<< " ";
                w -= wt[i-1];
            }
        }
    cout << endl;
    }


    int main(){

    int n;
    cout <<"Enter the number of items: ";
    cin >>n;

    int wt[n],P[n];
    cout <<"Enter the weights of items: ";
    for (int i = 0; i< n; i++) {
        cin >>wt[i];
    }

    cout <<"Enter the Values of items: ";
    for (int i = 0; i< n; i++) {
        cin >>P[i];
    }

    int m;
     cout <<"Enter the capacity of knapsack: ";
     cin >>m;
     knapsack(wt, P, n, m);

     return 0;
}
