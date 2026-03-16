#include<bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    string largestOddNumber(string& s)
    {
        int n = s.size();
        string ans = "";
        for(int i=n-1;i>=0;i--)
        {
            if((s[i]-'0') % 2 != 0)
            {
                ans = s.substr(0, i+1);
                return ans;
            }
        }
        return "";
    }
};

int main()

{
    string s = "0214638";
    Solution ob;
    cout << ob.largestOddNumber(s) << endl;
}