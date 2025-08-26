#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int num : nums) {
            ans ^= num;
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {2,2,1};
    Solution obj;
    cout << obj.singleNumber(nums);
    return 0;
}
