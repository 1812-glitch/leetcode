#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        if(n < 0) return 1 / myPow(x, -n);
        double half = myPow(x, n / 2);
        if(n % 2 == 0) return half * half;
        else return half * half * x;
    }
};

int main() {
    Solution s;
    cout << s.myPow(2.00000, 10) << endl;
    cout << s.myPow(2.10000, 3) << endl;
    cout << s.myPow(2.00000, -2) << endl;
}
