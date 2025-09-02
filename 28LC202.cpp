#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool isHappy(int n) 
    {
        unordered_set<int> seen;
        while(n!=1 && !seen.count(n)){
            seen.insert(n);
            int sum=0;
            while(n){
                int d=n%10;
                sum+=d*d;
                n/=10;
            }
            n=sum;
        }
        return n==1;
    }
};

int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<(obj.isHappy(n) ? "true" : "false");
}
