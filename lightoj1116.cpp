#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    long long int t,p,x,i;
    long long int w;
    cin>>t;
    for(int j=1;j<=t;j++){
        cin>>w;
        p=0,x=0;
        for( i=2;i<=w/2;i*=2){
            if(w%i==0)
                p=w/i;
            if(p%2!=0){
                x=1;
                break;
            }
        }
        if(!x)
            cout<<"Case "<<j<<": "<<"Imposible"<<endl;
        else
            cout<<"Case "<<j<<": "<<p<<" "<<i<<endl;
    }
    return 0;
}
