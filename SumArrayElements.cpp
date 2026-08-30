#include <iostream>
using namespace std;

int sum (int arr[], int n){
    int sum =0;
    for (int i =0; i<n; i++){
        for (int j=i; j<=i; j++){
            sum = sum + arr[i];
        }
    }
    return sum;

}

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<< "enter the elements of array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<< "Sum : "<< sum(arr,n) <<endl;
    return 0;
}