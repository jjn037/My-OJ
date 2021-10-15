//
// Created by jianan on 2021/10/15.
//

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> myMap = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        stack<char> st;
        if(s.length() == 1) return false;
        for(auto i: s){
            if(i == '(' || i == '{' || i == '['){
                st.push(i);
            }
            else if(st.size() != 0 && myMap[st.top()] == i)
                st.pop();
            else
                return false;
        }
        return st.empty();
    }
};