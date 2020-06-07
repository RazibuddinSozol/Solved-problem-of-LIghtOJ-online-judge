#include<iostream>
using namespace std;
int main()
{
    int t,tc=1;
    cin>>t;
    long long n,m;
    while(t--){
        cin>>n>>m;
        cout<<"Case "<<tc++<<": "<<(n*m)/2<<endl;
    }
    return 0;
}
