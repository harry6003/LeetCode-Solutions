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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode * temp = head;
        
        
        while(temp)
        {
            temp = temp->next;
            count++;
        }
        
        count -= n;
        
        if(count == 0)
        {
            ListNode * node = head;
            head = head->next;
            return head;
        }
        
        
        temp = head;
        while(count!=1)
        {
            temp = temp->next;
            count--;
        }
         ListNode * node = temp->next;
        temp->next = temp->next->next;
        delete node;
        
        
        return head;
    }
};