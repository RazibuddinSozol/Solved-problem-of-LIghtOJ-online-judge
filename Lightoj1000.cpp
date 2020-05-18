#include<iostream>
using namespace std;
int main()
{
    int t, a,b;
    cin>>t;
    for(int i=1;i<=t;i++){
            cin>>a>>b;
        if(a<=10&&b<=10)
            cout<<"Case "<<i<<": "<<a+b<<endl;
        else
            return 0;
    }
    return 0;
}
