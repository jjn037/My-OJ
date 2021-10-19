//
// Created by jianan on 2021/10/19.
//

class Solution {
private:
    vector<vector<string>> result;
    vector<string> path;
    bool isPalindrome(const string& s, int start, int end){
        for(int i = start, j = end; i < j; i++, j--){
            if(s[i] != s[j])
                return false;
        }
        return true;
    }

//    void backtrack(const string& s, int start){
//        if(start >= s.size()){
//            result.push_back(tmp);
//            return;
//        }
//        for(int i = start; i < s.size(); ++i){
//            if(isValid(s, start, i)){
//                string tmp_s = s.substr(start, i - start + 1);
//                tmp.push_back(tmp_s);
//                backtrack(s, start + 1);
//                tmp.pop_back();
//            }
//            else
//                continue;
//
//
//        }
//    }

    void backtracking (const string& s, int startIndex) {
        // 如果起始位置已经大于s的大小，说明已经找到了一组分割方案了
        if (startIndex >= s.size()) {
            result.push_back(path);
            return;
        }
        for (int i = startIndex; i < s.size(); i++) {
            if (isPalindrome(s, startIndex, i)) {   // 是回文子串
                // 获取[startIndex,i]在s中的子串
                string str = s.substr(startIndex, i - startIndex + 1);
                path.push_back(str);
            } else {                                // 不是回文，跳过
                continue;
            }
            backtracking(s, i + 1); // 寻找i+1为起始位置的子串
            path.pop_back(); // 回溯过程，弹出本次已经填在的子串
        }
    }
public:
    vector<vector<string>> partition(string s) {
//        vector<vector<string>> results;
//        vector<string> tmp;
        backtracking(s, 0);
        return result;
    }
};