#include <iostream>
using namespace std;

void sortDescending(int arr[], int n){
    for(int i =0; i<n-1; i++){
         for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
         }
    }
}
int GreedyCoinChange( int coins[], int n, int amount){

    sortDescending(coins, n);

    int count = 0;

    for(int i=0; i<n; i++){
        int c = coins[i];
    if(amount>= c){
        int num_coin = amount/ c;
        count+=num_coin;
        amount -= num_coin * c;

    if (amount == 0)
        break;
      }
   }
   return count;
}




int main(){
    int n;
    cout<< "Enter the size of coins: ";
    cin>>n;

    int coins[n];
    cout<<"Enter coins: ";
        for(int i=0; i<n; i++){
            cin>>coins[i];
    }

    int amount;
        cout<< "Enter the amount: ";
            cin>>amount;

    int result =  GreedyCoinChange(coins, n, amount);
        cout<<"Minimum coins: " <<result<< endl;

    return 0;
}