#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int possible(int day, vector<int>& nums, int k, int m)
    {
        int cnt = 0;
        int booke = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] <= day)
                cnt++;
            else
            {
                booke += (cnt/k);
                cnt = 0;
            }
        }
        booke += (cnt/k);
        if(booke >= m) return 1;
        return 0;
    }
    int roseGarden(int n,vector<int> nums, int k, int m) // brute force
    {
        if(m*k >n) return -1;
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        for(int i=mn;i<=mx;i++)
        {
            if(possible(i, nums, k, m))
                return i;
        }
        return -1;
    }

    int roseGarden1(int n,vector<int> nums, int k, int m)// binary search
    {
        if(m*k>n) return -1;
        int low = *min_element(nums.begin(), nums.end());
        int high = *max_element(nums.begin(), nums.end());

        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(possible(mid, nums, k, m))
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};

int main()
{
    int n = 8, k = 3, m = 2;
    vector<int> nums = {7, 7, 7, 7, 13, 11, 12, 7};
    Solution obj;
    cout << obj.roseGarden1(n, nums, k, m) << endl;
    return 0;
}