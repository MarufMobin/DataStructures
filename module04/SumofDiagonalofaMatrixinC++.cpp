////Sum Of Diagonal
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
//    int sum = 0;
//    for( int i = 0; i < row; i++ ){
//        for( int j = 0; j < col; j++ ){
//            if( i == j ){
//                sum += arr[i][j];
//            }
//        }
//    }
//    cout<<sum;
//    return 0;
//}


//Once More time find out Primary Diagonal Matrix Value

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col,i,j;
    cin>>row>>col;
    int arr[row][col];

    //Declare Value in 2D Matrix
    for( int i = 0; i < row; i++ ){
        for( int j = 0; j < col; j++ ){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for( int i = 0; i < row; i++ ){
        for( int j = 0; j < col; j++ ){
            if( i == j ){
                sum += arr[i][j];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
