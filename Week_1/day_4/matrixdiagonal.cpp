#include<vector>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        
        
        int sum=0;
        for(int i=0;i<row;i++){
            if (i!=row-1-i)
            {
                sum+=mat[i][i]+mat[i][row-i-1];
                }
            else{
                sum+=mat[i][i];
            }
        }
  return sum;  }
};