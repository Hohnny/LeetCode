/*
 * @Author: Junyi He hejy@geneplus.org.cn
 * @Date: 2023-06-09 11:48:40
 * @LastEditors: Junyi He hejy@geneplus.org.cn
 * @LastEditTime: 2023-06-09 12:02:16
 * @FilePath: /LeetCode/leetcode.cpp
 * @Description: LeetCode 代码测试
 */

#include <iostream>


using namespace std;

/// @brief 0003
/// @param s 
/// @return 
int lengthOfLongestSubstring(string s) {
    int maxLen = 0;
    string subStr;
    int low = 0;
    for(size_t i = 0; i < s.length();i ++){
        int idx = subStr.find(s[i]);
        subStr += s[i];
        if(idx == string::npos){
            maxLen += 1;
        }else{
            subStr.erase(0,idx+1);
            low += idx;
        }
        if(i +1 - low > maxLen)maxLen = i +1 - low;
    }
    return maxLen;
}

int main(){

    // 0003
    int maxLen = lengthOfLongestSubstring("abcabcbb");
    cout<<maxLen<<endl;

    cout<<"DONE"<<endl;
}