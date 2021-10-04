/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(https://leetcode.com/harry_6003/x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode * prev = NULL,*curr = head,*nex = NULL;
        
        while(curr)
        {
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
            
        }
        return prev;
        
    }
};