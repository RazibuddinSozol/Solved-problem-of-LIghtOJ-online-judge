#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int t,a,b,tc=1;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a<b)
            cout<<"Case "<<tc++<<": "<<b*4+19<<endl;
        else
           cout<<"Case "<<tc++<<": "<<(2*abs(b-a))*4+b*4+19<<endl;
    }
}
