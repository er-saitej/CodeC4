#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void getIthBit(int num, int bitnumber) {
    int mask = 1<<(bitnumber-1);
    if(num&mask) cout<<bitnumber<<"th bit value is 1"<<endl;
    else cout<<bitnumber<<"th bit value is 0"<<endl;
}

void setIthBit(int num, int bitnumber, int bit) {
    cout<<"Setting "<<bitnumber<<"th bit to "<<bit<<" and value is ";
    int mask = (1<<(bitnumber-1));
    if(bit==0) {
        mask = ~mask;
        cout<<(num&mask)<<endl;
    }
    else {
        cout<<(num|mask)<<endl;
    }
}

void solve(int num, int bitnumber) {
    getIthBit(num, bitnumber);
    setIthBit(num, bitnumber, 0);
    setIthBit(num, bitnumber, 1);
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, num, bitnumber;
    cin>>test;
    while(test--) {
        cin>>num;
        cin>> bitnumber;
        solve(num, bitnumber);
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}