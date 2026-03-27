#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int charToInt(char c)
    {
        switch(c)
        {
            case '0': return 0;
            case '1': return 1;
            case '2': return 2;
            case '3': return 3;
            case '4': return 4;
            case '5': return 5;
            case '6': return 6;
            case '7': return 7;
            case '8': return 8;
            case '9': return 9;
            default: return -1;
        }
    }

    int myAtoi(string input) 
    {
        int n = input.size();
        int i = 0;
        long result = 0;  // long for overflow check
        int sign = 1;

        // 1. skip leading spaces
        while(i < n && input[i] == ' ')
            i++;

        // 2. sign
        if(i < n && (input[i] == '+' || input[i] == '-'))
        {
            if(input[i] == '-') sign = -1;
            i++;
        }

        // 3. digits
        while(i < n)
        {
            int num = charToInt(input[i]);
            if(num == -1) break;

            result = result * 10 + num;

            // 4. overflow check
            if(sign == 1 && result > INT_MAX)
                return INT_MAX;
            if(sign == -1 && -result < INT_MIN)
                return INT_MIN;

            i++;
        }
        return (int)(result * sign);
    }
};

int main()
{
    Solution obj;
    string s = "   -42";
    cout << "The integer value of the string " << s << " is: " << obj.myAtoi(s) << endl;
    return 0;
}
