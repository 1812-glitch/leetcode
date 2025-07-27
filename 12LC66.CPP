#include<iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution s;
    vector<int> digits = {10};
    vector<int> result = s.plusOne(digits);
    
    cout << "Result after plus one: ";
    for(int digit : result) 
    {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}