#include<iostream>
using namespace std;

int ways(int coins[],int n,int target){

  int dp[n+1] [target +1];
  for(int i=0;i<=n;i++){
    dp[i][0]=1;
  }
  for(int j=1;j<=target;j++){
    dp[0][j]=0;
  }

  for(int i=1;i<=n;i++){

    for(int j=1;j<=target;j++){
        if(coins[i-1]>j){
            dp[i][j]=dp[i-1][j];
        }
        else{
            dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
        }
    }
  }

        return dp[n] [target];
}

void Combinations(int coins[],int n,int target,int current[],int idx,int position){

    if(target==0){
        for(int i=0; i<position;i++){
            cout<<current[i];
            if(i!=position-1){
                cout<<" ";
            }
        }
        cout<<endl;
        return;
    }
    for(int i=idx;i<n;i++){
        if(coins[i]<=target){
            current[position]=coins[i];
            Combinations(coins ,n, target-coins[i], current, i , position+1);
        }
    }

}

int main(){

   int n;
   cout<<"Enter number of coins: ";
   cin>>n;

   int coins[100];
   cout<<"Enter coin values: ";
   for(int i=0; i<n; i++){
        cin>>coins[i];
   }

   int target;
   cout<<"Enter target amount: ";
   cin>>target;

   int count = ways(coins,n,target);
   cout<<"Maximum number of ways to make "<< target <<"= "<<count<<endl;

   cout<<"\nAll possible combinations: \n";

   int current[100];
   Combinations(coins ,n,target,current,0,0);

   return 0;

}

