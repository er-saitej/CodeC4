#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int n) {
    int num1, num2, lowerBit, upperBit;
    cin>>num1>>num2>>lowerBit>>upperBit;
    num2 = num2<<(lowerBit-1);
    int mask1 = 1;
    int i = upperBit - 1;
    while(i--) {
        mask1 = (mask1<<1) + 1;
    }
    num2 = num2&mask1;
    int mask = ~((~((~0)<<(upperBit-lowerBit+1)))<<(lowerBit-1));
    num1 = num1&mask;
    cout<<(num1|num2)<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test;
    cin>>test;
    while(test--) solve(INT_MAX);
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}