#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution obj;
    int n,val;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    cin>>val;
    int k=obj.removeElement(nums,val);
    cout<<k<<endl;
    for(int i=0;i<k;i++) cout<<nums[i]<<" ";
    return 0;
}
