#include<string>
using namespace std;

class Solution {
public:

    bool aplha(char c){
        if ((int(c)>=65&&int(c)<=90)||(int(c)>=97&&int(c)<=122)||(int(c)>=48&&int(c)<=57))
            return true;
        else 
            return false;
    
    }
    bool isPalindrome(string s) {
        int i=0;
        int l=s.size()-1;
        int m=0;
        while(i<l){
            if (!(aplha(s[i]))){
                i++;
                continue;
            }
            if (!(aplha(s[l]))){
                l--;
                continue;
            }
            
            if(tolower(s[i])!=tolower(s[l])){
              return false;
            }
            i++;
            l--;}
        return true;
    }
};