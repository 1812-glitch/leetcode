#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int char2num(char a) {
        switch (a) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) 
    {
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            int num = char2num(s[i]);
            if(i+1<n && char2num(s[i+1]) > num)
            {
                ans -= num;
            }
            else
            {
                ans += num;
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    string s = "MCMXCIV";
    cout << "The integer value of the Roman numeral " << s << " is: " << obj.romanToInt(s) << endl;
    return 0;
}