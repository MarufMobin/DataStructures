#include<bits/stdc++.h>
using namespace std;

class Example{
private:
    int x;
    int pass;
public:
    Example( int p ){
        pass = p;
    }
    void setter( int a, int p ){
        if( pass == p ){
            x = a;
        }else{
            cout<<"Password din't Match"<<endl;
        }
    }
    int getter( int p ){
        if( pass == p ){
            return x;
        }else{
            cout<<"Password din't Match"<<endl;
            return -1;
        }
    }
};
int main(){
    Example a( 9615 );
    a.setter( 1500, 9615 );
    cout<<a.getter(9615)<<endl;
    return 0;
}
