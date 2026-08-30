#include<iostream>
using namespace std;

int Binary(int arr[], int n, int key){
     int L =1;
     int R= n;
     
      while(L<=R){
        int mid = (L+R)/2;

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
             L = mid+1;
        } else{
            R = mid-1;
            }
      }
      return -1;
    }

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    int result = Binary (arr, n, key);

    if(result!= -1){
        cout<<"key found"<<endl;
        cout<<"Position is "<<result<<endl;
    }else{
            cout<<"Not found"<<endl;
            }
            return 0;
    }