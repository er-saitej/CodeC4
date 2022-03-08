#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

bool isPalindrome(int x) {
    int num, r;
    long long reverse = 0;
    num = x;
    while(num>0) {
        r = num%10;
        reverse = reverse*10+r;
        num = num/10;
    }
    if(reverse==x) return true;
    return false;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, num;
    cin>>test;
    while(test--) {
        cin>>num;
        cout<<isPalindrome(num)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}