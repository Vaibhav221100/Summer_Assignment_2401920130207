#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st; //will store indices
        int maxarea=INT_MIN;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int ele =st.top();st.pop();
                int pse=st.empty()?-1:st.top();
                int nse=i;
                maxarea=max(maxarea,heights[ele]*(nse-pse-1));
            }
            st.push(i);
        }   
        while(!st.empty()){
            int nse=heights.size();
            int ele =st.top();st.pop();
            int pse=st.empty()?-1:st.top();
            maxarea=max(maxarea,heights[ele]*(nse-pse-1));
        }     
        return maxarea;
    }
};