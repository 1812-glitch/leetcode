#include<bits/stdc++.h> // Search in rotated sorted array-II
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int k) 
    {
         int n = nums.size();
        int low = 0, high = n - 1;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(nums[mid] == k) return true;
            else if(nums[low] == nums[mid] && nums[mid] == nums[high]) // when nums[low] == nums[mid] == nums[high]
            {
                low++;
                high--;
                continue;
            }
            else if(nums[low] <= nums[mid]) // left half if sorted
            {
                if(k >= nums[low] && k < nums[mid])
                {
                    high = mid-1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else if(nums[mid] <= nums[low]) // right half is sorted
            {
                if(k > nums[mid] && k <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
    int target = 2;

    bool found = obj.search(arr, target);
    if(found)
        cout << "Element " << target << " is present in the array." << endl;
    else
        cout << "Element " << target << " is not present in the array." << endl;

    return 0;
}