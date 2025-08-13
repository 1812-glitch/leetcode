#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int minPrice = INT_MAX, maxProfit = 0;
        for (int price : prices) 
        {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution s;
    cout << s.maxProfit(prices);
    return 0;
}
