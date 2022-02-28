#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

int solve(string s) {
    int result = 0;
    unordered_map<char, int> rs;
    rs['I'] = 1;
    rs['V'] = 5;
    rs['X'] = 10;
    rs['L'] = 50;
    rs['C'] = 100;
    rs['D'] = 500;
    rs['M'] = 1000;
    for(int i=0; i<s.size(); i++) {
        if ( (s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')) || (s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')) ||  (s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')) ) {
            result = result + rs[s[i+1]] - rs[s[i]];
            i++;
        }
        else {
            result = result + rs[s[i]];
        }
    }
    return result;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    cout<<solve("MCMXCIV");
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}