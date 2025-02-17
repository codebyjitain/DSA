class Solution {    
private:
    vector<int> leftPart(vector<int> heights){
        stack<int> st;
        st.push(-1);
        vector<int> ans;
        for(int i = 0;i<heights.size();i++){
            
            
                while(st.top()!=-1 && heights[st.top()]>=heights[i]){
                    st.pop();
                }
                ans.push_back(st.top());
                st.push(i);
            
        }
        return ans;
    }

private: 
     vector<int> rightPart(vector<int> heights){
        stack<int> st;
        st.push(-1);
        vector<int> ans(heights.size());
        for(int i = heights.size()-1;i>=0;i--){
            int curr = heights[i];
            
                while(st.top()!= -1 && heights[st.top()]>heights[i]){
                    st.pop();
                }
                if(st.top()==-1){

                    ans[i] = heights.size();
                }
                else{
                ans[i] = st.top();
            }
                st.push(i);
            
        }
        return ans;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> left = leftPart(heights);
        vector<int> right = rightPart(heights);
        int i =0;
        int ans = INT_MIN;
        while(i<left.size()){
            int l = heights[i];
            int b = right[i] - left[i] -1;

            ans = max(ans,l*b);
            i++;
        }
        return ans;
    }
};
