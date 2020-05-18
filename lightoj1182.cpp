#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#define size 100000
using namespace std;
int main()
{
    int t,tc=1,cnt,cnt2,n,a[size];
    cin>>t;
    while(t--){
        cin>>n;
        cnt=0;
        cnt2=0;
        for(int i=0;n>0;i++){
            a[i]=n%2;
            n=n/2;
            cnt++;
        }
        for(int i=cnt-1;i>=0;i--)
            if(a[i]==1)
                cnt2++;
        if(cnt2%2==0)
            cout<<"Case "<<tc++<<": "<<"even"<<endl;
        else
            cout<<"Case "<<tc++<<": "<<"odd"<<endl;
    }
    return 0;
}
