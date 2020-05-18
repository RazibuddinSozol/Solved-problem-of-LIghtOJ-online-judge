#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t,a,n,b,c;
    cin>>t;
    while(t--){
        cin>>n;
        a=0;
        if(n>10){
                a=n-10;
            cout<<a<<" "<<n-a<<endl;
        }
        else{
            cout<<a<<" "<<n<<endl;
        }
    }
    return 0;
}

