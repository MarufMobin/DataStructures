#include<bits/stdc++.h>
using namespace std;

int main()
{
        //C Language Using this Aproch for Dynamic Memory Allocation

//    int *ptr  = (int*)calloc(10,sizeof(int));
//    for( int i = 0; i < 10; i++ ){
//        cout<<ptr[i]<<endl;
//    }
//    free(ptr);

        //C++ Using this Approch for Dynamic Memory Allocation

//    int *p = new int[10]{1,2,4,5,8};
//    for( int i = 0; i < 10; i++ ){
//        cout<<p[i]<<endl;
//    }
//    delete p;
    int n;
    cin>>n;
    int *ptr = new int[n]{0};

    for( int i = 0; i < n; i++ ){
        cin>>ptr[i];
    }

    for( int i = 0; i < n; i++ ){
        cout<<ptr[i]<<" this is the Output also this is i - iteration =>"<<i<<endl;
    }
    return 0;
}
