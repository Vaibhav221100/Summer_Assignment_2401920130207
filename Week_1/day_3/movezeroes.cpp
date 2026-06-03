#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
                if (nums[i]==0){
                    count+=1;
                                  }

        }
     remove(nums.begin(),nums.end(),0);   
     for(int i=0;i<count;i++){
             nums.pop_back();

        }
     for(int i=0;i<count;i++){
             nums.push_back(0);

        }
    }
};