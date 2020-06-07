#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    double a1,b1,a2,b2,a3,b3,tc=1,p;
    double a,b,c,d,s,a4,b4;
    int t;
    cin>>t;
    while(t--){
        cin>>a1>>b1>>a2>>b2>>a3>>b3;
        a4=(a3-a2+a1);
        b4=(b3-b2+b1);
        c=sqrt((a3-a1)*(a3-a1)+(b3-b1)*(b3-b1));
        a=sqrt((a2-a1)*(a2-a1)+(b2-b1)*(b2-b1));
        b=sqrt((a3-a2)*(a3-a2)+(b3-b2)*(b3-b2));
        s=(a+b+c)*0.5;
        d=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Case "<<tc++<<": "<<a4<<" "<<b4<<" "<<2*(d)<<endl;
    }
    return 0;
}
