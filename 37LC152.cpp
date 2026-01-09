#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxx=INT_MIN;
        int prefix=1;
        int suffix=1;
        for(int i=0;i<n;i++)
        {
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;
            prefix*=nums[i];
            suffix*=nums[n-i-1];
            int currmax=max(prefix,suffix);
            maxx=max(maxx,currmax);
        }
        return maxx;
    }
};

int main()
{
    Solution obj;
    vector<int> nums={2,3,-2,4};
    int result=obj.maxProduct(nums);
    cout<<"Maximum product subarray is: "<<result<<endl;
    return 0;
}