#include<iostream>
using namespace std;

void SortDescendingByFinishTime(int start[], int finish[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n-i-1; j++){
            if(finish[j]> finish[j+1]){

                int tempF= finish[j];
                finish[j]= finish[j+1];
                finish[j+1]= tempF;
                
                int tempS= start [j];
                start[j]= start[j+1];
                start[j+1]= tempS;
            }
        }
    }
}
void GreedyActivitySelection( int start[], int finish[], int n){
    SortDescendingByFinishTime(start, finish, n);
    int lastSelectedActivity = 1;

    cout<< "(" << start[1] <<" , "<<finish[1] <<")" << endl;
    for(int i=2; i<=n; i++){
        if(start[i]>= finish[lastSelectedActivity]){
            cout<< "(" << start[i] <<" , "<<finish[i] << ")" << endl;
            lastSelectedActivity=i;
        }
    }
}

int main(){
    int n;
    cout<< " Enter number of activities(Sorted by finish time): ";
    cin>>n;

    int start[n], finish[n];

    cout<< "Enter the activities: ";
    for(int i =1; i<=n; i++){
        cin>> start[i] >> finish[i] ;
    }

    cout<< "Selected Activities: "<<endl;

    GreedyActivitySelection(start, finish, n);

    return 0;

}