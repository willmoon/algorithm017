/*
* @Author: willsun
* @Date:   2020-09-27 23:48:26
* @Last Modified by:   willsun
* @Last Modified time: 2020-09-27 23:48:37
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int index = 0;
        for(int i = 0; i < len; i ++){
            if(nums[i] != 0){
                nums[index] = nums[i];
                index ++;
            }
        }
        for(int i = index; i < len; i ++){
            nums[i] = 0;
        }
    }
};