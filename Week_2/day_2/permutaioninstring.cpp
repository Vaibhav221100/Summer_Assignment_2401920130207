#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool checkInclusion(string p, string s) {
        int  k = p.size(),n = s.size();
        if (k > n) return false;
        int ans=0;
        vector<int> f1(26,0), f2(26,0);

        for(char c : p) f1[c-'a']++;
        for(int i=0;i<k;i++) f2[s[i]-'a']++;

        for(int i=k;i<=n;i++){
            if(f1 == f2) ans=1;

            if(i == n) break;

            f2[s[i-k]-'a']--;
            f2[s[i]-'a']++;
        }
        return ans==1?true:false;
    }
};

