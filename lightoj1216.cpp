#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define PI acos(-1)
using namespace std;
int main()
{
    int t;
    double R,V,p,h,r1,r2;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>r1>>r2>>h>>p;
        R=r2+(r1-r2)*(p/h);
        V=1/3.0*PI*p*(R*R+R*r2+r2*r2);
        printf("Case %d: %0.9lf\n",i,V);
    }
    return 0;
}
