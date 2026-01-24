#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int search(vector<int> &nums, int k) 
    {
       int n = nums.size();
       int low = 0, high = n - 1;
       while(low<=high)
       {
        int mid  = low + (high - low) / 2;
        if(nums[mid] == k) return mid;
        if(nums[low] <= nums[mid]) // left half is sorted
        {
            if(k >= nums[low] && k < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else // right half is sorted
        {
            if(k > nums[mid] && k <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
       }
       return -1;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int index = obj.search(nums, target);
    if(index != -1)
        cout << "Element " << target << " found at index: " << index << endl;
    else
        cout << "Element " << target << " not found in the array." << endl;
    return 0;
}