#include<bits/stdc++.h>
using namespace std;
int main(){
    string st = " maruf mobin jabbar munna mahmud masum mollah";
    stringstream stream;
    stream<<st;

    string w;
    while( stream>>w ){
        cout<<w<<endl;
    }
   return 0;
}


