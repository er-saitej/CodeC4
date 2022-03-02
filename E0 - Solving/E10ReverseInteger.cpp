#include<bits/stdc++.h>
// #define int long long int
#define endl "\n"
using namespace std;

int solve(int32_t x) {
        int s=x;
        int r, p;
        int reverse = 0;
        if(s<0) s=-s;
        p = std::to_string(s).length()-1;
        while(s) {
            r = s%10;
            reverse = reverse + r*pow(10, p);
            s = s/10;
            p--;
        }
        reverse = x<0?-reverse:reverse;
        if(reverse<INT_MIN || reverse>INT_MAX) return 0;
        return reverse;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, n;
    cin>>test;
    while(test--) {
        cin>>n;
        cout<<solve(n);
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}