#include<iostream>
using namespace std;

 int StepNum =1;
void merge(int A[], int l, int mid, int r, int n){
    int n1= mid-l+1;
    int n2= r-mid;
   
    int L[n1], R[n2];

    for(int i=0; i<n1; i++){
       L[i]=A[l+i];
    }
     for(int j=0; j<n2; j++){
       R[j]=A[mid+1+j];
    }
    int i=0, j=0, k=l;
    while(i<n1 &&j<n2){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i++;
            k++;
        }else{
           A[k]=R[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        A[k]=L[i];
            i++;
            k++;
    }
    while(i<n2){
         A[k]=R[j];
            j++;
            k++;
    }

    cout<<"After merge Step "<< StepNum++ <<": ";
    for(int p=0; p<n;p++ ){
        cout<<A[p]<<" ";
            //StepNum++;
    }
    cout<<endl;
    
}
    void mergeSort(int arr[],int l, int r,int n){
        if(l<r){
            int mid = (l+r)/2;
          mergeSort(arr, l, mid, n);
          mergeSort(arr, mid+1, r,n);
          merge(arr, l, mid, r,n);  
        }
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

    mergeSort(arr, 0, n-1, n);
    cout<< "The sorted result: ";

    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }

    return 0;
}