//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int arr[5] = { 8, 3 , 1, 9, 6 }, n = 5;
//
//    for( int i = 0; i < n; i++ ){
//        for( int j = 0; j < i; j++){
//            if( arr[i] < arr[j] ){
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    for( int i = 0; i < n; i++ ){
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}


//Using Another Aproch for Shorting which is Start to exact N

//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//    int arr[] = { 3, 4, 2, 6, 7, 1}, n = 6;
//    for( int i = 0; i < n-1; i++ ){
//        for( int j = i+1; j < n; j++ ){
//            if( arr[i] > arr[j] ){
//                    swap(arr[i], arr[j]);
////                int temp = arr[i];
////                arr[i] = arr[j];
////                arr[j] = temp;
//            }
//        }
//    }
//    for( int i = 0; i < n; i++ ){
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//    int ar[] = {1, 3, 5, 8, 9 }, n = 5;
//    for( int i = 0; i < n; i++ ){
//        for( int j = 0; j < i; j++ ){
//            if( ar[i] > ar[j] ){
//                    swap( ar[i] , ar[j] );
////                int temp = ar[i];
////                ar[i] = ar[j];
////                ar[j] = temp;
//            }
//        }
//    }
//    for( int i = 0; i < n; i++ ){
//        cout<<ar[i]<<" ";
//    }
//
//    return 0;
//}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10, b = 100;
    swap(a, b);
    cout<<a<<" "<<b;
    return 0;
}
