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
    
//     ListNode * reverse (ListNode * head)
//     {
//         if(head == NULL || head -> next == NULL)
//             return head;
        
//         ListNode * remain = reverse(head->next);
//         head -> next->next  = head;
//         head->next = NULL;
//         return remain;
//     }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode * res = new ListNode();
         ListNode * result = res;
        int carry = 0;
        while(l1 != NULL|| l2 != NULL )
        {
            int sum = 0;
            if(l2)
            {
                sum += l2->val;
            }
            if(l1)
            {
                sum += l1->val;
            }
            sum += carry;
            carry=0;
            int value = sum % 10;
            carry = sum / 10;
            
            ListNode * newNode = new ListNode(value);
            res->next = newNode;
            res = res->next;
        
            
            if(l1)
                l1=l1->next;
            if(l2)
                l2 = l2->next;
        }
        
        if(carry != 0)
        {
            while(carry != 0)
            {
            ListNode * newNode = new ListNode(carry%10);
            res->next = newNode;
            res = res->next;  
                carry = carry / 10;
            }
          
        }
        
        return (result->next);
    }
};