#include <iostream>
 using namespace std;

 int main(){
    int n, i;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<< "Enter the elements of array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    
    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i]= arr[n-1-i];
        arr[n-1-i]= temp;
    }


    cout<< "Reversed Array ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
