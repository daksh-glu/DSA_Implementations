/*You are given a string s representing an expression containing various types of brackets: {}, (), and []. Your task is to determine whether the brackets in the expression are balanced. A balanced expression is one where every opening bracket has a corresponding closing bracket in the correct order.

*/
bool isParenthesisBalanced(string& s) {
        // code here
        int n = s.size();
        stack<char>st;
        for(int i = 0; i < n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char ch = st.top();
                if(s[i] == ')'&& ch == '(' || s[i] == '}' && ch == '{' || s[i] == ']' && ch == '[' ){
                    st.pop();
                } 
                else{
                    return false;
                }
            }
        }
        return st.empty();
        
    }
/*problem link : https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1?page=1&category=Stack,Queue&difficulty=Basic,Easy&status=unsolved&sortBy=submissions
*/
