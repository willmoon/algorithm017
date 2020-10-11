/*
* @Author: willsun
* @Date:   2020-10-11 23:29:32
* @Last Modified by:   willsun
* @Last Modified time: 2020-10-11 23:29:35
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret = vector<vector<string>>();
        unordered_map <string,vector<string> > mKeys;
        for(string& s : strs){
            string t = s;
            sort(t.begin(),t.end());
            mKeys[t].push_back(s); 
        }

        for(auto& n : mKeys)
            ret.push_back(n.second);
        return ret;
    }
};