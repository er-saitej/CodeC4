#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

vector<int> solve(vector<int> &nums, int target) {
    vector<int> result;
    result.reserve(2);
    if(nums.size()==2) {
        result.push_back(0);
        result.push_back(1);
        return result;
    }
    else {
        int left = 0;
        int right = nums.size()-1;
        sort(nums.begin(), nums.end());
        while(left<right) {
            if(nums.at(left)+nums.at(right)<target) {
                left++;
            }
            else if(nums.at(left)+nums.at(right)>target) {
                right--;
            }
            else {
                result.push_back(nums.at(left));
                result.push_back(nums.at(right));
                break;
            }
        }
        cout<<result.at(0)<<" "<<result.at(1);
        return result;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, target, number;
    vector<int> nums;
    nums.reserve(10000);
    cin>>test;
    while(test--) {
        cin>>number;
        nums.push_back(number);
    }
    cin>>target;
    solve(nums, target);
    cerr<<((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}