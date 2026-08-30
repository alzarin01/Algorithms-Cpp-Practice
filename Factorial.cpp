#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the num:";
    cin>>n;

    int fact = 1;
    for(int i =1; i<=n; i++){
        fact = fact * i;
    }

    cout<< "Factorial is: "<<fact<<endl;
    return 0;
}