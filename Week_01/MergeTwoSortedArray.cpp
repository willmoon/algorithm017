/*
* @Author: willsun
* @Date:   2020-09-27 20:56:20
* @Last Modified by:   willsun
* @Last Modified time: 2020-09-27 22:19:13
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n -1;
        while(i >= 0 && j >= 0){
            while(i >= 0 && nums1[i] >= nums2[j]){
                nums1[k] = nums1[i];
                i --;
                k --;
            }

            while(j >= 0 && i >= 0 && nums2[j] >= nums1[i]){
                nums1[k] = nums2[j];
                j --;
                k --;
            }
        }

        while(j >= 0){
            nums1[k] =nums2[j];
            j --;
            k --;
        }
    }
};