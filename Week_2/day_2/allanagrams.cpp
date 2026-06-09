#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), k = p.size();
        if (k > n) return {};

        vector<int> f1(26,0), f2(26,0);
        vector<int> ans;

        for(char c : p) f1[c-'a']++;
        for(int i=0;i<k;i++) f2[s[i]-'a']++;

        for(int i=k;i<=n;i++){
            if(f1 == f2) ans.push_back(i-k);

            if(i == n) break;

            f2[s[i-k]-'a']--;
            f2[s[i]-'a']++;
        }
        return ans;
    }
};