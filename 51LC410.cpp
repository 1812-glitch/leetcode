#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitArray(vector<int>& a, int k) 
    {
        int n = a.size();
        int l = *max_element(a.begin(), a.end()), r = accumulate(a.begin(), a.end(), 0);
        while(l<=r)
        {
            int m = l + (r-l)/2;
            int sum = 0, count = 1;
            for(int i=0;i<n;i++)
            {
                sum += a[i];
                if(sum > m)
                {
                    count++;
                    sum = a[i];
                }
            }
            if(count > k)
                l = m + 1;
            else
                r = m - 1;
        }  
        return l;
    }
};

int main()
{
    Solution s;
    vector<int> a = {1,2,3,4,5};
    int k = 3;
    cout<<s.splitArray(a, k);
    return 0;
}