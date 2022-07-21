#include<bits/stdc++.h>
using namespace std;

//Parent Class are here
class Parent{
public:
    int x;
private:
    int y;
protected:
    int z;
public:
    Parent( int a, int b, int c ){
        x = a;
        y = b;
        z = c;
    }
};

//Child Class are here
class Child: public Parent{
public:
    int xx;
    Child(int aa, int a, int b, int c ) : Parent( a,b,c ){
        xx = aa;
    }
    void tellMe(){
        cout<<"Public Value " <<x<<endl;
    }
};

int main(){

    Parent pt(10, 20, 30);
    Child ch(100, 10, 20, 30 );
//    cout<<ch.x<<endl;
    ch.tellMe();
    return 0;
}
