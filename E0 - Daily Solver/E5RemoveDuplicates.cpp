#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int mask = nums.at(0);
    int index = 1;
    for(vector<int>::iterator itr=nums.begin()+1; itr!=nums.end(); itr++) {
        if(*itr!=mask) {
            mask = *itr;
            nums.at(index) = *itr;
            index++;
        }
    }
    int i=nums.size()-1;
    for(vector<int>::iterator itr=nums.end()-1; itr>=nums.begin(); itr--) {
        if(i>=index) {
            nums.erase(itr);
        }
        i--;
    }
    return index;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    vector<int> nums;
    int test, num;
    cin>>test;
    while(test--) {
        cin>>num;
        nums.push_back(num);
    }
    cout<<removeDuplicates(nums);
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}