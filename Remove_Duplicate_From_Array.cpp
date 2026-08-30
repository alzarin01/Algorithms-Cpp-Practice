#include <iostream>
 using namespace std;
 
 int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<< "Enter the elements of array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
   
  for(int i=0 ; i<n; i++){     //pick each element
    for(int j = i+1 ; j<n; j++){ //compare with rest
        if(arr[i]==arr[j]){
            for(int k =j; k<n-1 ; k++){   // if matches, then all elements shifts left
                arr[k]= arr[k+1];
            }
            n--;
            j--;
        }
    }
}
    cout<<"Array without Duplicates: ";
    for(int i=0 ; i<n; i++) {
        cout<< arr[i] <<" ";
    }
    return 0;
}