#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    if( a > b ){
        cout<<a<<" The Grater";
    }else if( a < b) {
        cout<<b<<" The Bigger Value";
    }else{
        cout<<"Both are Equal";
    }
    return 0;
}
