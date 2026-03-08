#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int> &arr1, vector<int> &arr2) 
    {
        if(arr1.size() > arr2.size())
        {
            return findMedianSortedArrays(arr2, arr1);
        }
        int n = arr1.size();
        int m = arr2.size();
        int low = 0, high = n;
        while(low <= high)
        {
            int cut1 = low + (high -low)/2;
            int cut2 = (n + m + 1)/2 - cut1;

            int left1 = cut1 == 0 ? INT_MIN : arr1[cut1-1];
            int left2 = cut2 == 0 ? INT_MIN : arr2[cut2-1];

            int right1 = cut1 == n ? INT_MAX : arr1[cut1];
            int right2 = cut2 == m ? INT_MAX : arr2[cut2];

            if(left1 <= right2 && left2 <= right1)
            {
                if((n + m) % 2 == 0)
                {
                    return (max(left1, left2) + min(right1, right2))/2.0;
                }
                else
                {
                    return max(left1, left2);
                }
            }
            else if(left1 > right2)
            {
                high = cut1 - 1;
            }
            else
            {
                low = cut1 + 1;
            }
        }
        return 0.0;
    }
};

int main()
{
    Solution s;
    vector<int> arr1 = {2,4,6};
    vector<int> arr2 = {1,3,5};
    cout<<s.findMedianSortedArrays(arr1, arr2)<<endl;
    return 0;
}