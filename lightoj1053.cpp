#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int t,tc=1,a[40002],b;
    cin>>t;
    while(t--){
      for(int i=0;i<3;i++)
        cin>>a[i];
      sort(a,a+3);
      if((a[0]*a[0]+a[1]*a[1])==(a[2]*a[2]))
        cout<<"Case "<<tc++<<": "<<"yes"<<endl;
      else
        cout<<"Case "<<tc++<<": "<<"no"<<endl;
    }
    return 0;
}
