#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int t,tc=1,x1,y1,x2,y2,m,x,y;
    cin>>t;
    while(t--){
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
    cout<<"Case "<<tc++<<":"<<endl;
        while(m--){
            cin>>x>>y;

            if((x>=x1&&x<=x2)&&(y>=y1&&y<=y2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
