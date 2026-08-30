#include<iostream>
using namespace std;

int LIS_length(int Arr[],int n){
   int LIS[100], prev[100];
   for(int i=1;i<=n;i++){
    LIS[i]=1;
    prev[i]=-1;
   }

   for(int i=2; i<=n; i++){
    for(int j=1;j<=i-1;j++){
        if(Arr[i]>Arr[j]){
            if(LIS[i]<LIS[j]+1){
                LIS[i]=max(LIS[i], LIS[j]+1);
                prev [i]=j;
            }
        }
    }
   }

   int max_length=0;
   int end_Index=-1;

   for(int i=n; i>=1; i--){
    if(LIS[i]> max_length){
        max_length= LIS[i];
        end_Index=i;
    }
   }

   int sequence[100];
   int k=0;
   while(end_Index!= -1){
        sequence [k++]= Arr[end_Index];
        end_Index= prev[end_Index];
   }
   cout<<"LIS sequence: ";
   for(int i=k-1; i>=0;i--){
     cout<<sequence[i]<<" ";
   }

   cout<<endl;
   return max_length;

}


int main(){

   int n;
   cout<<"Enter number of elements: ";
   cin>>n;

   int Arr[100];
   cout<<"Enter the array elements: ";
   for(int i=1;i<=n;i++){
   cin>>Arr[i];
   }

   int length = LIS_length(Arr,n);
   cout<<"Length of LIS: "<<length<<endl;
   return 0;

}

