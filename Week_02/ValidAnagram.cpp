/*
* @Author: willsun
* @Date:   2020-10-11 22:51:22
* @Last Modified by:   willsun
* @Last Modified time: 2020-10-11 22:51:27
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int flag[26] = {0};
        for(int i = 0; i < s.size(); i ++){
            flag[s[i] - 'a'] ++;
        }
        for(int i = 0; i < t.size(); i ++){
            flag[t[i] - 'a'] --;
        }
        for(int i = 0; i < 26; i ++){
            if(flag[i] != 0 ){
                return false;
            }
        }
        return true;
    }
};