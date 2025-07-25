#include<iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int sumOfMultiples(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 || i%5==0 || i%7==0)
            {
                count += i;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    int n = 7;
    int result = s.sumOfMultiples(n);
    cout << "Sum of multiples of 3, 5, or 7 up to " << n << ": " << result << endl;

    return 0;
}