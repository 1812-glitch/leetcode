#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    long long totalHours(const vector<int>& nums, int rate)
    {
        long long totalhours = 0;

        for(int x : nums)
        {
            totalhours += (x + rate - 1LL) / rate;
        }
        return totalhours;
    }

    int minEatingSpeed(vector<int>& nums, int h)
    {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while(low <= high)
        {
            int mid = low + (high - low)/2;

            if(totalHours(nums, mid) <= (long long)h)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};


int main()
{
    int  n = 5,  h = 5;
    vector<int> nums = {25, 12, 8, 14, 19};
    Solution obj;
    cout << obj.minEatingSpeed(nums, h) << endl;
    return 0;
}
