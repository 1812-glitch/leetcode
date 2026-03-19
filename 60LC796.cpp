#include<bits/stdc++.h>
using namespace std;

class Solution{	
public:
    bool rotateString(string& s,string& goal)
    {
        int n = s.size();
        return s.length() == goal.length() && (s + s).find(goal) != string::npos;
    }
};

int main()
{
    Solution obj;
    string  s = "abcde" , goal = "adeac";
    if(obj.rotateString(s,goal))
        cout << "The strings are rotations of each other." << endl;
    else
        cout << "The strings are not rotations of each other." << endl;
    return 0;
}