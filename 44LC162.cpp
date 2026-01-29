#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int findPeakElement(vector<int> &arr) 
    {
        int n = arr.size();
        if (n == 1) return 0;
        if(arr[0] > arr[1]) return 0;
        if(arr[n - 1] > arr[n - 2]) return n - 1;
        int low = 1, high = n - 2;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if((arr[mid] > arr[mid - 1])&&(arr[mid] > arr[mid + 1]))
            {
               return mid; 
            }
            else if(mid > 0 && arr[mid] < arr[mid + 1])
            {
                low = mid + 1;
            }
            else if(mid > 0 && arr[mid] < arr[mid - 1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> arr = {1, 2, 1, 3, 5, 6, 4};
    Solution obj;
    int peakIndex = obj.findPeakElement(arr);
    cout<<"Index of a peak element is: "<<peakIndex<<endl;
    return 0;
}