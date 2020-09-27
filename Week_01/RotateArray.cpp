/*
* @Author: willsun
* @Date:   2020-09-27 18:53:54
* @Last Modified by:   willsun
* @Last Modified time: 2020-09-27 18:53:57
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        int count = 0;

        //此处结束结束条件是交换次数满足
        for(int i = 0; count < len; i ++){
            int firstPos = i;
            int nextPos;
            int v = nums[firstPos];
            
            //需要检测交换x次后回到起始位置的情况
            int current = firstPos;
            do{
                nextPos = (firstPos + k) % len;
                int t = nums[nextPos];
                nums[nextPos] = v;
                v = t;
                firstPos = nextPos;
                count ++;
            }while(current != nextPos);
        }
    }
};