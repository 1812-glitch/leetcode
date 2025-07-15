#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]+1)%3==0){count++;}
            else if((nums[i]-1)%3==0){count++;}
            
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {3,6,9};
    cout<<s.minimumOperations(arr);
}