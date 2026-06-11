#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i = 0;

        while (i < s.size() && s[i] != ' ') {
            i++;
        }

        string word = s.substr(0, i);
        reverse(word.begin(), word.end());

        if (i == s.size()) {
            return word;
        }

        return word + " " + reverseWords(s.substr(i + 1));
    }
};