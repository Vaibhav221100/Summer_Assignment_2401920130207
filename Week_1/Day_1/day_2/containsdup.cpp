#include <vector>
#include <algorithm> // Required for std::sort
using namespace std;
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        // Step 1: Sort the vector
        sort(nums.begin(), nums.end());

        // Step 2 & 3: Iterate through the sorted vector and check for adjacent duplicates
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }

        // Step 4: No duplicates were found
        return false;
    }
};