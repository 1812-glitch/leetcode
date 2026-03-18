#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool isomorphicString(string s, string t) 
    {
        int n = s.size();
        
        map<char, char> mp1, mp2;

        for(int i = 0; i < n; i++)
        {
            // check s -> t
            if(mp1.find(s[i]) != mp1.end())
            {
                if(mp1[s[i]] != t[i])
                    return false;
            }
            else
            {
                mp1[s[i]] = t[i];
            }

            // check t -> s (reverse)
            if(mp2.find(t[i]) != mp2.end())
            {
                if(mp2[t[i]] != s[i])
                    return false;
            }
            else
            {
                mp2[t[i]] = s[i];
            }
        }
        return true;
    }
};

int main()
{
    string s = "egg", t = "add";
    Solution ob;
    cout << ob.isomorphicString(s,t) << endl;
}