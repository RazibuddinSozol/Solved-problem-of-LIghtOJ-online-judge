#include<iostream>
#include<math.h>
using namespace std;
#define MAX 165000
int main()
{
    int n,a,t;
    cin>>t;
    long long X=MAX;
    while(t--){
    cin>>n;
    long long c=0;
    for(int i=1;i<=X;i++){
        for(int j=2;j<=X;j++){
            if(i%j==0){
                    a=j;
                break;
            }
        }
        if(i==a){
            c++;
                if(n==c)
                    cout<<a<<endl;
            }
        }
    }
    return 0;
}
