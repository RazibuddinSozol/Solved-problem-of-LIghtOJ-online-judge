#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int t,tc=1,r1,c1,r2,c2;
    cin>>t;
    while(t--){
        cin>>r1>>c1>>r2>>c2;

        if(abs(r1-r2)==abs(c1-c2)){
            cout<<"Case "<<tc++<<": "<<1<<endl;
        }
        else if((r1+c1+r2+c2)%2==0){
            cout<<"Case "<<tc++<<": "<<2<<endl;
        }
        else{
            cout<<"Case "<<tc++<<": "<<"impossible"<<endl;
        }
    }
    return 0;
}
