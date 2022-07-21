#include<bits/stdc++.h>
using namespace std;
int  main(){
    char O[51], E[51];
    cin>>O>>E;
    int len = strlen(O) + strlen(E);

    char arr[len];
    int m = 0, n = 0;
    for( int i = 0; i <= len; i++ ){
        if( i % 2 == 0 ){
            arr[i] = O[m];
            m++;
        }else if(i % 2 != 0 ) {
            arr[i] = E[n];
            n++;
        }
    }
    cout<<arr<<endl;
    return 0;
}
