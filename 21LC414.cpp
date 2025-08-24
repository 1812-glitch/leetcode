#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        set<int> s(nums.begin(),nums.end());
        vector<int> v(s.rbegin(),s.rend());
        if(v.size()<3) v[0];
        return v[2];
    }
};

int main()
{
    Solution s;
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter elements of array: ";
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<s.thirdMax(v)<<endl;
    return 0;
}