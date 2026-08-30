// #include <iostream>
// using namespace std;

// int search(int arr[], int n, int key){
//     int  i =0;
//     while (i<n){
//         if(arr[i]==key){
//             cout<<"Index position of "<<key<< " : "<< i <<endl;
//                 break;
//         }else{
//               i++;
//         } 
//     }
//     cout<<"Not Found"<<endl;
//     return i;
// }

// int main(){
//     int n;
//     cout<<"Enter the size: ";
//     cin>>n;

//     int arr[n];
//     cout<< "enter the elements of array: ";
//     for(int i =0; i<n; i++){
//         cin>>arr[i];
//     }

//     int key;
//     cout<<"search for: ";
//     cin>>key;

//     search(arr, n, key);
//     return 0;
// }


#include <iostream>
 using namespace std;

 int main(){
    int n, i;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<< "enter the elements of array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"search for: ";
    cin>>key;

    int index = -1;

    for(i=0; i<n; i++){
        if (arr[i]==key){
            index =i;
            break;
        }
    }

    if(index!=-1){
        cout<<"Index position of "<<key<< " : "<< i <<endl;
    }else{
        cout<< "not found" << endl; 
    }
}