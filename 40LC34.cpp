#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int first = -1, last = -1; 
        // Find first occurrence
        int low = 0, high = n - 1;
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid]==target)
            {
                first = mid;
                high = mid - 1;
            }
            else if(nums[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid - 1;
            }
        }
        // Find last occurrence
        low = 0, high = n - 1;
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid]==target)
            {
                last = mid;
                low = mid+1;
            }
            else if(nums[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return {first, last};
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> range = obj.searchRange(nums, target);
    cout << "The first and last occurrence of " << target << " is: [" << range[0] << ", " << range[1] << "]" << endl;
    return 0;
}