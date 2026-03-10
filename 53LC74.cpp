#include<bits/stdc++.h> // lowwer bound
using namespace std;

class Solution{
public:
    int lowerBound(vector<int> &nums, int x)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int low = 0, high = n - 1;
        int ans = n; // Default to n if x is greater than all elements
        while(low <= high) 
        {
            int mid = low + (high - low)/2;
            if(nums[mid] >= x)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            } 
        }
        return ans;
    }

    int lowerBoundBS(vector<int> &nums, int low, int high, int x)
    {
        if(low > high)
            return low;
        int mid = low + (high - low)/2;
        if(nums[mid] >= x)
            return lowerBoundBS(nums, low, mid - 1, x);
        else
            return lowerBoundBS(nums, mid + 1, high, x);
    }
    int lowerBound1(vector<int> &nums, int x)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return lowerBoundBS(nums, 0, n - 1, x);
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {3, 5, 7, 9, 11};
    int x = 7;
    int index = obj.lowerBound(nums, x);
    cout << "The lower bound index of " << x << " is: " << index << endl;
    return 0;
} 