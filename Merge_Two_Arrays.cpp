#include <iostream>
 using namespace std;
 
 int main(){
    int n1, n2;
    cout<<"Enter the sizes: ";
    cin>>n1>>n2;

    int arr1[n1];
    cout<< "Enter the elements of array 1: ";
    for(int i =0; i<n1; i++){
        cin>>arr1[i];
    }

    int arr2[n2];
    cout<< "Enter the elements of array 2: ";
    for(int i =0; i<n2; i++){
        cin>>arr2[i];
    }

    int Merged[n1+n2];
    for(int i =0; i<n1; i++){
        Merged[i]= arr1[i];
    }
    for(int i =0; i<n2; i++){
        Merged[n1+i]= arr2[i];
    }

    cout<<"the Merged array: ";
    for(int i =0;i<n1+n2;i++){
        cout<<Merged[i]<<" ";
    }
    return 0;
}