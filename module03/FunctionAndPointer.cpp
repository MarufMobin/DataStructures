//#include<bits/stdc++.h>
//using namespace std;
//void print( int x ){
//    cout<<x<<endl;
//}
//int main(){
//    print(5);
//    return 0;
//}
//


//Function and Pointer Using C++

//#include<bits/stdc++.h>
//using namespace std;
//void changeValue( int *x ){
//
//    *x = 2500;
//}
//int main(){
//    int a = 10;
//    int *Pa = &a;
//    int **Qa = &Pa;
//    changeValue(Pa);
//    cout<<a<<endl;
//    cout<<*Pa<<endl;
//    cout<<**Qa;
//    return 0;
//}


//Using Function And Pointer For Spacific Value Change Parpuss

#include<bits/stdc++.h>
using namespace std;
void changeValue( int **x ){
    **x = 2500;
}
int main(){
    int a = 25;
    int *Pa = &a;
    int **PPA = &Pa;
    changeValue(PPA);
    cout<<a;
    return 0;
}
