class Solution {
private:
    
vector<int> leftPart(vector<int> arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        while (st.top() != -1 && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        ans.push_back(st.top());
        st.push(i);
    }
    return ans;
}

   
vector<int> rightPart(vector<int> arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];

        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        if (st.top() == -1)
        {
            ans[i] = n;
        }
        else
        {
            ans[i] = st.top();
        }
        st.push(i);
    }
    return ans;
}

int maxRectangleArea(vector<int> arr, int n)
{
    vector<int> left(n);
    left = leftPart(arr, n);

    vector<int> right(n);
    right = rightPart(arr, n);

    int i = 0;
    int ans = INT_MIN;
    while (i < n)
    {
        int l = arr[i];
        int b = right[i] - left[i] - 1;

        ans = max(ans, l * b);
        i++;
    }
    return ans;
}

public:
   int maximalRectangle(vector<vector<char>>& matrix) {

    vector<int> arr;
    int element ;
    for(int i = 0;i<matrix[0].size();i++){
        if(matrix[0][i]=='0'){
            element = 0;
        }
        else{
            element = 1;
        }
        arr.push_back(element);
    }
    int ans = maxRectangleArea(arr,arr.size());

    for(int i = 1;i<matrix.size();i++){
        for(int j = 0;j<matrix[0].size();j++){
            if(matrix[i][j] == '0'){
                element = 0;
            }
            else{
                element = 1;
            }

            if(element!=0){

            arr[j] = arr[j] + element;
            }
            else{
                arr[j] = 0;
            }
        }
        ans = max(ans,maxRectangleArea(arr,arr.size()));
    }
return ans;
}
};
