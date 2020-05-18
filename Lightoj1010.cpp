#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int m,n,x,f;
    int tc=1,t;
    cin>>t;
    while(t--){
        cin>>m>>n;
        if(m==1||n==1){
            cout<<"Case "<<tc++<<": "<<max(m,n)<<endl;
        }
        else if(m==2||n==2){
            f=max(m,n);
            if(f%4==0)
                x=f;
            else if(f%4==1)
                x=f+1;
            else if(f%4==2)
                x=f+2;
            else if(f%4==3)
                x=f+1;
            cout<<"Case "<<tc++<<": "<<x<<endl;

        }
        else if((m*n)%2==0){
            cout<<"Case "<<tc++<<": "<<(m*n)/2<<endl;
        }
        else{
            cout<<"Case "<<tc++<<": "<<((m*n)/2)+1<<endl;
        }
    }
    return 0;
}
