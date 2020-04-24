#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,c,sum=0;
    cin>>n;
    if(n==0)
        cout<<"1"<<endl;
    else if(n>0){
        cout<<(n*(n+1))/2<<endl;
    }
    else {
          c=abs(n);
        cout<<"-"<<((c*(c+1))/2)-1<<endl;
    }
    return 0;
}
