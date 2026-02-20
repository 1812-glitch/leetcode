#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int shipWithinDays(vector<int>& weights, int days) // Brute Force
    {
        int n = weights.size();
        int sum = accumulate(weights.begin(),weights.end(),0);
        int mx = *max_element(weights.begin(),weights.end());
        for(int cp=mx;cp<=sum;cp++)
        {
            int d = 1, load = 0;
            for(int i=0;i<n;i++)
            {
                if(load + weights[i] > cp)
                {
                    d++;
                    load = weights[i];
                }
                else
                {
                    load += weights[i];
                }
            }
            if(d <= days)
                return cp;
        }
    }

    int shipWithinDays1(vector<int>& weights, int days) 
    {
        int n =weights.size();
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low < high)
        {
            int mid = low + (high - low)/2;
            int d = 1, load = 0;
            for(int i=0;i<n;i++)
            {
                if(load + weights[i] > mid)
                {
                    d++;
                    load = weights[i];
                }
                else
                {
                    load += weights[i];
                }
            }
            if(d <= days)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};

int main()
{
    Solution s;
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout<<s.shipWithinDays1(weights,days);
}