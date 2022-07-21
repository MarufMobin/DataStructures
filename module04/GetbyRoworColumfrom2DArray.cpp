//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int row, col;
//    cin>>row>>col;
//
//    int arr[row][col];
//    for( int i = 0; i < row; i++ ){
//        for( int j = 0; j < col; j++ ){
//            cin>>arr[i][j];
//        }
//    }
//
//    cout<<"Given a Column Value"<<endl;
//    int columnNumber;
//    cin>>columnNumber;
//
//    int sum = 0;
//    for( int i = 0; i < row; i++ ){
//        for( int j = 0; j < col; j++ ){
//            if( j == columnNumber-1 ){
//                sum += arr[i][j];
//            }
//        }
//    }
//    cout<<sum;
//    return 0;
//}



#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    int arr[row][col];

    for( int i = 0; i < row; i++ ){
        for( int j  = 0; j < col; j++ ){
            cin>>arr[i][j];
        }
    }
    int printCol;
    cout<<"Given a Column Value : ";
    cin>>printCol;

    for( int i = 0; i < row; i++ ){
        cout<<arr[printCol][i]<<" ";
    }
    return 0;
}
