#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int searchInsert(vector<int> &nums, int target)  
    {
       int n = nums.size();
         sort(nums.begin(), nums.end());
        int low = 0, high = n - 1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) low = mid +1;
            else high = mid -1;
        }
        return low;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1,3,5,6};
    int target = 5;
    int result = obj.searchInsert(nums, target);
    cout << "The target should be inserted at index: " << result << endl;
    return 0;
}