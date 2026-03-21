#include<bits/stdc++.h>
using namespace std;

class Solution{	
public:
    bool anagramStrings(string& s,string t)
    {
        if(s.size() != t.size())
            return false;
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++)
        {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(auto x : count)
        {
            if(x != 0)
                return false;
        }
    return true;
    }
};

int main()
{
    Solution obj;
    string  s =  "anagram" , t = "nagaram";
    if(obj.anagramStrings(s,t))
        cout << "The strings are anagrams of each other." << endl;
    else
        cout << "The strings are not anagrams of each other." << endl;
    return 0;
}
