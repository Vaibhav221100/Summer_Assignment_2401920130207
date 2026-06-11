#include<string>
using namespace std;
class Solution {
public:
    string solve(string& s, int& i) {
        string res;

        while (i < s.size() && s[i] != ']') {
            if (isalpha(s[i])) {
                res += s[i];
                i++;
            } else {
                int num = 0;

                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                i++; // skip '['

                string temp = solve(s, i);

                i++; // skip ']'

                while (num--) {
                    res += temp;
                }
            }
        }

        return res;
    }

    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
};