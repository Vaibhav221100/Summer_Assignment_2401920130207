#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string p) {
        stack<char> s;
        for (auto x:p){
            if (x=='(' || x=='{' || x=='['){
                s.push(x);
            }
            else{
            if(s.empty())
                    return false;
            else if (x=='}' && s.top()!='{'){
                return false;
            }
            else if (x==']' && s.top()!='['){
                return false;
            }
            else if (x==')' && s.top()!='('){
                return false;
            }
            s.pop();
            }
        }
        return s.empty();
    }
};