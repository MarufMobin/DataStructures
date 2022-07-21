#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;

    int arr[row][col];

    for( int i = 0; i < row; i++ ){
        for( int j = 0; j < col; j++ ){
//            cout<<i<<","<<j<<"  ";
            cin>>arr[i][j];
        }
//        cout<<endl;
    }

    cout<<endl<<"This is The Output Section"<<endl<<endl;
    for( int i = 0; i < row; i++ ){
        for( int j = 0; j < col; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
