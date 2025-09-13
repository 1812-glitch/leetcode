#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i+1) % n]) {
                count++;
            }
            if(count > 1) return false;
        }
        return true;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cout << (obj.check(nums) ? "true" : "false") << endl;
    return 0;
}
