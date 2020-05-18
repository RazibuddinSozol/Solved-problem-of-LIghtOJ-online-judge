#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,t,x,y,p,ct=1;
    cin>>t;
    while(t--){
        cin>>n;
        p=ceil(sqrt(n));
        if((p*p-n)<p){
            x=p;
            y=p*p-n+1;
        }
        else{
            y=p;
            x=-p*p+2*p+n-1;
        }
        if(p%2!=0){
            swap(x,y);
        }
        cout<<"Case "<<ct++<<":"<<x<<" "<<y<<endl;
    }
    return 0;
}
