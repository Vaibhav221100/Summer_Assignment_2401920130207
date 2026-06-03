#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int i = 0;
        int j = nums.size() - 1;
        int x = nums.size() - 1;

        while(i <= j){
            if(abs(nums[i]) > abs(nums[j])){
                res[x] = nums[i] * nums[i];
                i++;
            }
            else{
                res[x] = nums[j] * nums[j];
                j--;
            }
            x--;
        }

        return res;
    }
};