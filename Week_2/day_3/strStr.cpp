#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=needle.size();
        int n=haystack.size();
        if (m == 0) {
            return 0;
        }
        if (n < m) {
            return -1;
        }
        int start_index=0;
        int i=0,a=0;
        while(i<n){
            if (needle[a]==haystack[i]){
                a++;
                i++;
            }
            else{
                a=0;
                start_index++;
                i=start_index;
            }
            if (a==m){
                return start_index;
            }
            if (start_index>n-m) return -1;
        }
        return -1;
    }
};