#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords1(string s) //optimsed approach
    {
        int n = s.size();
        string ans = "";
        
        int i = n - 1;
        while(i >= 0)
        {
            while(i >= 0 && s[i] == ' ')
                i--;
            if(i < 0) break;
            int j = i;
            while(i >= 0 && s[i] != ' ')
                i--;

            string word = s.substr(i + 1, j - i) + " ";
            ans += word;
        }
            if(ans.size() > 0)
                ans.pop_back();
        return ans;
    }
};

int main()
{
    string s = "welcome to the jungle";
    Solution obj;
    cout << obj.reverseWords1(s) << endl;
    return 0;
}