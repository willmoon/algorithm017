/*
* @Author: willsun
* @Date:   2020-09-27 19:17:41
* @Last Modified by:   willsun
* @Last Modified time: 2020-09-27 19:17:52
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr && l2 == nullptr){
            return nullptr;
        }
        ListNode* ret = nullptr;
        if(l1 == nullptr){
            ret = new ListNode(l2->val);
            ret->next = mergeTwoLists(nullptr, l2->next);
        }else if(l2 == nullptr){
            ret = new ListNode(l1->val);
            ret->next = mergeTwoLists(l1->next, nullptr);
        }else{
            if(l1->val < l2->val){
                ret = new ListNode(l1->val);
                ret->next = mergeTwoLists(l1->next, l2);
            }else{
                ret = new ListNode(l2->val);
                ret->next = mergeTwoLists(l1, l2->next);
            }
        }

        return ret;
    }
};