#include<iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long rev = 0;
        while (x != 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        if (rev < INT_MIN || rev > INT_MAX) return 0;
        return rev;
    }
};

int main() {
    Solution s;
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    cout << "Reversed: " << s.reverse(x) << endl;
    return 0;
}
