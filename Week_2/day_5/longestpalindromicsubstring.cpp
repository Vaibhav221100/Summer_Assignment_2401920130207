#include<string>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int low,high,center,start,maxlen=0;
        int n=s.size();
        for(center=0;center<n;center++){
            //odd length
            low=center;
            high=center;
            while(low>=0&&high<n && s[low]==s[high]){
                if ((high-low +1)>maxlen){
                    start=low;
                    maxlen=high-low+1;
                }
                low--;
                high++;
            }
            //even length
            low=center;
            high=center+1;
            while(low>=0&&high<n && s[low]==s[high]){
                if ((high-low +1)>maxlen){
                    start=low;
                    maxlen=high-low+1;
                }
                low--;
                high++;
            }
        }
        return s.substr(start,maxlen);
        }
};