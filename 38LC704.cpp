#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) // iterative binary search
    {
        int n=nums.size();
        int low=0, high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    vector<int> nums={-1,0,3,5,9,12};
    int target=9;
    int result=obj.search(nums, target);
    if(result!=-1)
        cout<<"Element found at index: "<<result<<endl;
    else
        cout<<"Element not found in the array."<<endl;
    return 0;
}