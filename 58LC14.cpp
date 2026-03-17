#include<bits/stdc++.h>
using namespace std;

class Solution{	
public:
    string longestCommonPrefix(vector<string>& str)
    {
        int n = str.size();
        string ans = "";
        for(int i=0;i<str[0].size();i++)
        {
            char ch = str[0][i];
            bool match = true;
            for(int j=1;j<n;j++)
            {
                if(str[j].size() < i+1 || str[j][i] != ch)
                {
                    match = false;
                    break;
                }
            }
            if(match == false)
                break;
            else
                ans.push_back(ch);
        }
        return ans;
    }
};

int main()

{
    vector<string> str = {"flower","flow","flight"};
    Solution ob;
    cout << ob.longestCommonPrefix(str) << endl;
}