#include <vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int  n=nums.size();
        int sum=0;
        int i=0;
        for(i=0;i<k;i++){
            sum+=nums[i];
        }
        double max_av=(double)sum/k;
        
        for(i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            double sumo=(double)sum/k;
            max_av=max(sumo,max_av);

        }

    return max_av;

    }
};