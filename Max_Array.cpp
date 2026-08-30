#include <iostream>
 using namespace std;

int Max(int arr[],int n){
   int max = arr[0];

  for(int i=0 ; i<n; i++){
    if (arr[i]> max){
        max= arr[i];
    }
  }
  cout<< "Max is: " <<max << endl;
   return max;
 }
 
 int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<< "Enter the elements of array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    Max(arr,n);
    return 0;
}
