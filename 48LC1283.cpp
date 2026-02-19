#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int smallestDivisor1(vector<int> &nums, int limit)
    {
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(),nums.end());
        while(low < high)
        {
            int mid = low + (high - low) / 2;
            int sum = 0;
            for(auto &x : nums)
            {
                sum += (x + mid - 1) / mid;
            }
            if(sum <= limit)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {44,22,33,11,1};
    int limit = 5;
    cout<<s.smallestDivisor1(nums,limit);
}