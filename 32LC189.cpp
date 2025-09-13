#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& nums, int left, int right)
    {
        while(left<right)
        {
            int temp = nums[left]; //use swap function insted this 3 lines(natak)
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
    void rotateToRight(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if(n==0) return;
        k = k % n; //in case k is greater than n
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-k-1);
        reverse(nums,0,n-1);
    }
};

int main()
{
    Solution obj;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int k;
    cout << "Enter the number of positions to rotate: ";
    cin >> k;
    obj.rotateToRight(nums,k);
    cout << "Array after rotating by " << k << " positions: ";
    for(int i=0;i<n;i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}