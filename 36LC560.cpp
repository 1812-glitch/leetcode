#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k)//optimal
    {
        unordered_map<int, int> mpp;
        int preSum = 0;
        int cnt = 0;

        mpp[0] = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            preSum += nums[i];

            int remove = preSum - k;
            cnt += mpp[remove];      

            mpp[preSum]++;            
        }

        return cnt;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 1, 1};
    int k = 2;
    int result = obj.subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;
    return 0;
}