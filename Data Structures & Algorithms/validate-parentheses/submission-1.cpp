#include <stack>

class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> matches = {
    {')', '('},
    {']', '['},
    {'}', '{'}
};
    
    for(char c : s){
        if( c == '(' ||  c == '[' || c == '{'){
            st.push(c); 
        } 
        if( c == ')' ||  c == ']' || c == '}'){
            if(st.empty() || st.top() != matches[c]) return false;
                st.pop(); 
        } 
    }
    return st.empty();
    }
};
