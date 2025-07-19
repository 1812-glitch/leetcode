#include <iostream>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int count = 0;
        for(int i=1;i<num;i++)
        {
            if(num % i == 0)
            {
                count += i;
            }
        }
        return num == count;
    }
};

int main() {
    Solution s;
    cout<<s.checkPerfectNumber(28);
    return 0;
}