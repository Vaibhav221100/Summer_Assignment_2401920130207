#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(auto x:s){
            mp1[x]++;
        }
        for(auto w:t){
            mp2[w]++;
        }
        return mp1==mp2;
    }
};