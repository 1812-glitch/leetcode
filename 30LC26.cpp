#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.empty()) return 0;
        int k = 1; 
        for(int i = 1; i < nums.size(); i++) 
        {
            if(nums[i] != nums[k-1]) 
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }   
};

int main() 
{
    Solution obj;
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int k = obj.removeDuplicates(nums);
    cout << k << endl;
    for(int i = 0; i < k; i++) cout << nums[i] << " ";
    return 0;
}
