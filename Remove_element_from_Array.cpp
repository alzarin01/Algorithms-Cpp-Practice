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
   
     int m;
    cout<<"Enter the element to remove: ";
    cin>>m;

  for(int i=0 ; i<n; i++){     //pick each element
    if(arr[i]==m){
       for(int j=i; j<n-1; j++){
        arr[j]=arr[j+1];
            }
        n--;
        i--;
    }
  }
  
    cout<<"Array without "<<m <<" : ";
    for(int i=0 ; i<n; i++) {
        cout<< arr[i] <<" ";
    }
    return 0;
}