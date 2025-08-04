#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int total = n * (n + 1) / 2;
        int sum = 0;
        
        for(int x : nums) 
        {
            sum += x;
        }
        
        return total - sum;
    }
};

int main() 
{
    vector<int> nums = {3, 0, 1};
    
    Solution s;
    int missing = s.missingNumber(nums);
    
    cout << "Missing number: " << missing << endl;
    return 0;
}
