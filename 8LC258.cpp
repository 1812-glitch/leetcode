#include<iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) 
    {
        if (num <= 0) return 0;

        while(num>9)
        {
            int ls = num%10;
            int a = ls;
            num = num/10 + a;
        }
        return num;
    }
};

int main()
{
    Solution a;
    cout << a.addDigits(55);
    return 0;
}
