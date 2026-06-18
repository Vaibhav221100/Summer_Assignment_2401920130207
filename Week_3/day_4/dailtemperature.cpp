#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        int n=temperatures.size();
        vector<int> answer(n,0);
        //unordered_set<int,int> mp;
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[i]>st.top().first){
                answer[st.top().second] = i - st.top().second;
                st.pop();
            }
            st.push({temperatures[i],i});
        }
        while(!st.empty()){
            answer[st.top().second]=0;
            st.pop();
        }
        return answer;
    }
};