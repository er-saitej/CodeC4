#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string result = "";
    unordered_map<int, char> mp;
    int small = INT_MAX;
    int index = 0;
    int strIndex = -1;
    for(auto x: strs) {
        if(x.length()<small) {
            small=x.length();
            strIndex = index;
        }
        index++;
    }
    index = 0;
    for(auto x: strs[strIndex]) {
        mp[index] = x;
        index++;
    }
    for(auto x: strs) {
        for(int i=0;i<small;i++) {
            if(mp[i]!=x[i]) {
                if(i<small) small=i;
                mp.erase(i);
            }
        }
    }
    for(int i=0;i<small;i++) {
        result = result+mp[i];
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
    int test;
    vector<string> strs;
    string str;
    cin>>test;
    while(test--) {
        cin>>str;
        strs.push_back(str);
    }
    cout<<longestCommonPrefix(strs);
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}