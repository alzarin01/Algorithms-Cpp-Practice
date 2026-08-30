#include<iostream>
using namespace std;

void insertion(int arr[], int n){
    int swaps = 0;
    for(int i = 1; i<n; i++){
        int key = arr[i];
        int j = i-1;

    while( j>=0 && arr[j]> key){
        arr[j+1]= arr[j];
        swaps++;
        j = j-1;
    }
        arr[j+1] = key;
    }
    cout<<" Swaps: "<<swaps<<endl;
}

int main(){
    int n;
    cout<< "Enter the size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    insertion(arr, n);
    cout<< "The sorted result: ";

    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    return 0;

}