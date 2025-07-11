#include<iostream>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int countnondivisible = 0;
        int countdvisible = 0;
        for(int i=1;i<=n;i++)
        {
            if(i%m == 0)
            {
                countdvisible = countdvisible + i;
            }
            else countnondivisible = countnondivisible + i;
        }
        int sumdiffrence;
        sumdiffrence = countnondivisible - countdvisible;
        return sumdiffrence;
    }
};

int main()
{
    Solution a;
    cout<< a.differenceOfSums(5,1);
}