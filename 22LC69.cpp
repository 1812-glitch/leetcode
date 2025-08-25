#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        return (int)sqrt(x);
    }
};

int main() {
    Solution s;
    int x;
    cin >> x;
    cout << s.mySqrt(x);
    return 0;
}
