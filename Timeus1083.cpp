#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    char ch[50];
    int n,c=1,k=0;
    cin>>n;
    cin>>ch;
    cout<<endl;
    for(int i=0;i<=sizeof(ch);i++){
        if(ch[i]=='!'){
            k++;
        }
    }
    for(int i=n;i>=(n%k);i=i-k){
        if(i==0)
            break;
        c=c*i;
    }
     cout<<c<<endl;
    return 0;
}
