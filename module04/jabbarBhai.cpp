#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[5] = {1 , 3, 5, 2, 4 };
    for( int i = 0; i < 5; i++ ){
        for( int j = 0; j < i; j++ ){
            if( arr[i] > arr[j] ){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for( int i = 0; i < 5; i++ ){
        cout<<arr[i]<<" ";
    }
    return 0;
}
