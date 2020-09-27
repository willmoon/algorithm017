/*
* @Author: willsun
* @Date:   2020-09-27 17:06:13
* @Last Modified by:   willsun
* @Last Modified time: 2020-09-27 17:06:19
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int i = 0;
        int j = i + 1;
        while(j < nums.size()){
            if(nums[j] != nums[i]){
                i ++;
                nums[i] = nums[j];
            }
            j ++;
        }
        return i + 1;
    }
};