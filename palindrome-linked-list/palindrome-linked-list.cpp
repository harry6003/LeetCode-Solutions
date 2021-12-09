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
    ListNode * reverse(ListNode * head)
    {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode * curr = head;
        ListNode * pre = NULL;
        ListNode * nex = NULL;
        
        while(curr != NULL)
        {
            nex = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nex;
        }
        
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return true;
        ListNode * slow = head;
        ListNode * fast = head;
       // cout<<slow->val<<endl;
        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
       // cout<<slow->val<<endl;
        slow->next = reverse(slow->next);
        slow = slow->next;
        //cout<<slow->val<<endl;
        ListNode * start = head;
        while(slow != NULL)
        {
           // cout<<slow->val<<" a "<<endl;
          //  cout<<start->val<<" d "<<endl;
            if(slow->val != start->val)
                return false;
            
            slow = slow->next;
            start = start->next;
        }
        return true;
    }
};