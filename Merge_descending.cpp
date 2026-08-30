#include <iostream>
#include<conio.h>
#include <climits>
using namespace std;

void merge(int A[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int L[n1], R[n2];

    for (int i= 0; i< n1; i++){
        L[i] = A[l+i];
}
    for (int j =0;j< n2; j++){
        R[j] = A[mid+1+j];
    }

    int i=0, j= 0;
    int k = l;

    while (i<n1 && j<n2){
        if (L[i] >= R[j]) {
            A[k] = L[i];
            i ++;
            k++;
        }else{
            A[k] = R[j];
            j++;
            k++;
        }
    }


    while (i<n1 ){
            A[k] = L[i];
            i ++;
            k++;
        }
       while (j<n2 ){
            A[k] = R[j];
            j++;
            k++;
        }
}

void mergeSort(int A[], int l, int r){
    if (l<r) {
        int mid = (l + r)/2;
        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, r);
        merge(A, l, mid, r);
    }
}

int main(){
    int A[100];
    int n;

    cout<<"Enter the size: ";
    cin >> n;

    cout<< "Enter the elements: ";
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    mergeSort(A, 0, n-1);
    cout<<"The sorted result: ";
    for (int i = 0; i<n; i++){
        cout<< A[i] <<"  ";
    }
    return 0;
}