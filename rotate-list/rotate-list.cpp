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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL)
            return head;
        int count = 1;
        
        ListNode * temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        k = k % count;
        
        temp->next  = head;
        
        k = count - k;
        
        while(k--)
        {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        
       
        return head;
    }
};