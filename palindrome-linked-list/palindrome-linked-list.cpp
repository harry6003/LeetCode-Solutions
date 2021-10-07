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
    ListNode * reverse (ListNode * head)
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
        ListNode * rev = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return rev;
            
    }
    
    
    bool isPalindrome(ListNode* head) {
        
         ListNode * dumb = new ListNode();
        dumb->next = head;
         ListNode * slow = dumb;
         ListNode * fast = dumb;
        
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        ListNode * reve = reverse(slow->next);
        slow->next = reve;
        slow = slow->next;
        
        ListNode * check = head;
        
        while(slow != NULL)
        {
            if(slow->val != check->val)
                return false;
            slow=slow->next;
            check = check->next;
        }
        return true;
    }
};