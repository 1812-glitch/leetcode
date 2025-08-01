#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s = "HeLLo WoRLD";

    string result = sol.toLowerCase(s);
    cout << "Lowercase string: " << result << endl;

    return 0;
}
