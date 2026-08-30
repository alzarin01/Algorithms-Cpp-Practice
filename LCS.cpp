#include<iostream>
using namespace std;

int LCS_length( char X[], char Y[], int m, int n, char LCS[] ){

    int c[100][100];

    for(int i=0; i<=m; i++){
        c[i][0]=0;
    }
    for(int j=0; j<=n; j++){
        c[0][j]=0;
    }

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(X[i-1]== Y[j-1]){
                c[i][j]=c[i-1][j-1]+1;
            }
            else {
                c[i][j]= max(c[i-1][j],c[i][j-1]);
            }
        }
    }

    int index = c[m][n];
    LCS[index] = '\0';

    int i=m, j=n;
    while(i > 0 && j > 0){
         if(X[i-1]== Y[j-1]){
            LCS[index-1] = X[i-1];
            i--;
            j--;
            index--;
         }
          else if( c[i-1][j] >c[i][j]){
            i--;
          }
          else{
            j--;
          }
    }

      return c[m][n];
}

int main(){

    char X[100], Y[100];

    int m;
    cout<<"Enter the length of the first sequence: ";
    cin>>m;

    cout<<"Enter the sequence: ";
    for(int i=0; i<m ;i++){
        cin>>X[i];
    }

    int n;
    cout<<"Enter the length of the second sequence: ";
    cin>>n;

    cout<<"Enter the sequence: ";
    for(int i=0; i<n ;i++){
        cin>>Y[i];
    }
    char LCS[100];

    int LcsLength = LCS_length(X, Y, m, n, LCS );
    cout<<"The Length is: "<<LcsLength<<endl;

    cout<<"The sequence: "<<LCS<<endl;

    return 0;
}