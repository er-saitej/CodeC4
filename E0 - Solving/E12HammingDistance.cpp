#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int solve(int n1, int n2) {
    int mask = n1^n2;
    int hammingDistance = 0;
    while(mask>0) {
        hammingDistance++;
        mask = mask&(mask-1);
    }
    return hammingDistance;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, num1, num2;
    cin>>test;
    while(test--) {
        cin>>num1>>num2;
        cout<<solve(num1, num2)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}