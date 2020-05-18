#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int t,tc=1;
    cin>>t;
    double n,R;
    while(t--){
    cin>>R>>n;
    double x=pi/n;
    double demm=sin(x);
    double r=(R*demm)/(1+demm);
    cout<<"Case "<<tc++<<": ";
    printf("%0.9lf\n",r);
    }
    return 0;
}
