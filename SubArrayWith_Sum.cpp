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

     int targetSum;
    cout<<"Enter the Target Sum: ";
    cin>>targetSum;

    bool found = false;

    for(int i=0 ; i<n; i++){     
        int sum =0;
    for(int j = i ; j<n; j++){
        sum = sum + arr[j];
        if(sum==targetSum){
            found = true;
              break;
    } 
}
if (found) break; 
    }

    if(found){
        cout<<"SubArray with given sum exists";
    }else{
        cout<<"SubArray with given sum doesnt exist" <<endl;
    }

    return 0;
}

