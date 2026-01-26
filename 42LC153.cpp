#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int findMin(vector<int> &arr)  
    {
      int n = arr.size();
      int low = 0, high = n - 1;
      int ans = INT_MAX;
      while(low <= high)
      {
        int mid = low + (high - low) / 2;

        if (arr[low] <= arr[high])
        {
            ans = min(ans, arr[low]);
            break;
        }

        if(arr[low] <= arr[mid]) // left half sorted
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else // right half sorted
        {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
      }
      return ans;
    }
};
 
int main()
{
    vector<int> arr = {2,1};
    Solution obj;
    int result = obj.findMin(arr);
    cout << result << endl;

    return 0;
}