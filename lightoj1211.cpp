#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int t,tc=1,n,x1,y1,z1,x2,y2,z2,m1,m2,m3,n1,n2,n3;
    cin>>t;
    while(t--){
            n1=1001,n2=1001,n3=1001;
            m1=0,m2=0,m3=0;
            cin>>n;
        for(int i=0;i<n;i++){
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            if(x1>m1)
                m1=x1;
            if(y1>m2)
                m2=y1;
            if(z1>m3)
                m3=z1;
            if(x2<n1)
                n1=x2;
            if(y2<n2)
                n2=y2;
            if(z2<n3)
                n3=z2;
        }
        if(n1>m1&&n2>m2&&n3>m3)
            cout<<"Case "<<tc++<<": "<<((n1-m1)*(n2-m2)*(n3-m3))<<endl;
        else
            cout<<"Case "<<tc++<<": "<<0<<endl;
    }
    return 0;
}
