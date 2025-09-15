#include<bits/stdc++.h> // missing element in array
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> hash(n+1,0);

        for(int i=0;i<n;i++) hash[nums[i]]++;
        for(int i=0;i<=n;i++)
        {
            if(hash[i]==0) return i;
        }
        return -1; // should never reach here
    }
};

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n-1);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n-1;i++) cin>>arr[i];

    Solution obj;
    int ans=obj.missingNumber(arr);
    cout<<"Missing element is: "<<ans<<endl;
    return 0;
}