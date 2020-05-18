#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int n,tc=1;
    double t,pi;
    cin>>n;
    pi=2*acos(0.0);
    while(n--){
        cin>>t;
        printf("Case %d: %0.2lf\n",tc++,(((2*t)*(2*t))-(t*pi*t)));
    }
    return 0;
}
