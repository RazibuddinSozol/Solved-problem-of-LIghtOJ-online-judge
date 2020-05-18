#include<bits/stdc++.h>
using namespace std;
int divisiblecount(int n) {
    if (n==0)
        return 0;
    int ans = (n / 3) * 2;
    if (n % 3 == 2)
        ans=ans+1;
    return ans;
}
int main() {
    int T, cases = 1, a, b;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", cases++ , divisiblecount(b) - divisiblecount(a - 1));
    }
    return 0;
}
