#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maxele(vector<vector<int>>& mat, int col, int m, int n)
    {
        int maxvalue = -1;
        int idx = -1;
        for(int i=0; i<n; i++)
        {
            if(mat[i][col] >= maxvalue)
            {
                maxvalue = mat[i][col];
                idx = i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) 
    {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m - 1;
        while(low <= high)
        {
            int mid  = low + (high -low)/2;
            int row = maxele(mat, mid,m,n);\
            int left = mid-1 >-1 ? mat[row][mid-1] : -1;
            int right = mid+1 < m ? mat[row][mid+1] : -1;
            if(mat[row][mid] > left && mat[row][mid] > right)
                return {row, mid};
            else if(mat[row][mid] < right)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return {-1, -1};
    }
};

int main()
{
    Solution s;
    vector<vector<int>> mat = {{1,4},{3,2}};
    vector<int> ans = s.findPeakGrid(mat);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}