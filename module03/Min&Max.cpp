#include<bits/stdc++.h>
using namespace std;

int main(){

//    int a = 10, b = 5;
    //Find Bigger then Two Number
//    if( a > b ){
//        cout<<a<<" is Bigger Then "<<b;
//    }else{
//        cout<<b<<" is Bigger Then "<<a;
//    }
    //Find Smaller Then Two Number
//    int mn;
//
//    if( a < b ){
//        mn=a;
//    }else{
//        mn=b;
//    }
//    cout<<mn;

    //Find Smaller then Using Building Function
//    int mn = min(a, b);
//    int mx = max(a, b);
//    cout<<"This is the Max Number "<<mx<<endl;
//    cout<<"This is the Min Number "<<mn;


    //Find four Value who are min and Who are Max
//    int a = 49, b = 32, c = 133;
//    int mx = max( a, max(b,c));
//    cout<<mx;
//    int mn = min( a, min(b, c));
//    cout<<mn;

    //Find Multiple Value Who is the Smaller Then Four individual Value
//    int a = 21, b = 34, c = 312, d = 23;
//    int mn = min(a,min(b,min(c,d)));
//    cout<<"The Minimum Value is "<<mn<<endl;
//    int mx = max(a,max(b,max(c,d)));
//    cout<<"The Maximum Value is "<<mx;


    //**********Find Minimum And Maximum in array **********

    int arr[] = { 8, 3, 4, 1, 6, 9 }, n = 6;
    int mn = arr[0];
    int mx = arr[0];

    for( int i = 0; i < n; i++ ){

        //Using Function to find Smaller Value
            mn = min( mn, arr[i]);
        //Find Smaller Value Using Core Code
//        if( arr[i] < mn ){
//            mn = arr[i];
//        }


        //Using Function to Find Maximum Value
            mx = max( mx, arr[i]);

        //Find Maximum Value using Core Code
//        if( arr[i] > mx ){
//            mx = arr[i];
//        }

    }
    cout<<"Maximum Value "<<mx<<" Minimum Value "<<mn<<endl;

    //Find The Array Min and Max Value

//    int arr[] = {1, 5, 6, 9 ,3, 8, 2 };
//    int mx=arr[0];
//    int mn=arr[0];
//    for( int i = 0; i < 5; i++ ){
//        mx = max(mx,arr[i+1]);
//        mn = min(mn, arr[i+1]);
//    }
//    cout<<"This is Minimum Value "<<mn<<endl;
//    cout<<"This is Maximum Value "<<mx<<endl;

    return 0;
}
