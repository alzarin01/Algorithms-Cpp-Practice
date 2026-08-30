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

    int repeated_element =  -1;
    bool found = false;

      for(int i=0 ; i<n; i++){     //pick each element
    for(int j = i+1 ; j<n; j++){ //compare with rest
        if(arr[i]==arr[j]){
           repeated_element = arr[i];
            found = true;
            break;
        }
    }
    if(found) break;
}
    if (repeated_element != -1) {
        cout << "First repeated element: " <<repeated_element << endl;
    } else {
    cout << "No repeated elements found." << endl;
    }
return 0;
}