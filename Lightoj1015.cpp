#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int n,t,tc=1,a[1001];
    cin>>t;
    while(t--){

        int sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            if(a[i]>0)
            sum=sum+a[i];
        cout<<"Case "<<tc++<<": "<<sum<<endl;
    }
    return 0;
}
