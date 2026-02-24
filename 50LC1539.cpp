#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int n  = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]<k)
                k++;
            else
                return k;
        }
    }

    int findKthPositive1(vector<int>& arr, int k) 
    {
        int n  = arr.size();
        int low = 0, high = n-1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            int missing = arr[mid] - (mid + 1);
            if(missing < k)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low + k;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {2,3,4,7,11};
    int k = 5;
    cout<<s.findKthPositive1(arr,k);
}