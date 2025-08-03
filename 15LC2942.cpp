#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] == x) {
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"leet", "code"};
    char x = 'e';
    vector<int> result = sol.findWordsContaining(words, x);

    cout << "[ ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}
