#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    char name[100];
    int roll;
};

int main(){
    Student Maruf;
    strcpy(Maruf.name, "Maruf Mobin");
    Maruf.roll = 50;

    cout<<Maruf.name<<" "<<Maruf.roll;
    return 0;
}
