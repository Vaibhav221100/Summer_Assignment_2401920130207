#include<unordered_map>
#include<string>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp1;
        for (auto x:magazine){
            mp1[x]++;
        }
        for(auto x:ransomNote){
            if (mp1[x]==0) return false;
            mp1[x]--;
        }
        return true;
    }
};
