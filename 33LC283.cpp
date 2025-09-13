#include<bits/stdc++.h> //move all zeroes to the end of the array
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n=nums.size();
        int i = 0;
        for(int j = 1; j < n; j++)
        {
           if(nums[i]!=0) i++;
           if(nums[j]!=0 && nums[i]==0)
           {
                swap(nums[i],nums[j]);
                i++;
           }
        }
        return;
    }
};

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    Solution obj;
    obj.moveZeroes(nums);
    cout << "Array after moving zeroes to the end: ";
    for(int i=0;i<nums.size();i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}