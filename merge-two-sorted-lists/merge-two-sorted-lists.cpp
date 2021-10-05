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
        
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        
        ListNode * ans = new ListNode();
        ListNode * temp = ans;
        while(l2 != NULL && l1 != NULL)
        {
            
            if(l1->val >= l2->val)
            {
                ListNode * newNode = new ListNode(l2->val);
                temp->next = newNode;
                l2=l2->next;     
            }
            else
            {
                ListNode * newNode = new ListNode(l1->val);
                temp->next = newNode;
                l1=l1->next;   
                
            }
            temp = temp->next;
        }
        
        if(l1 == NULL)
        {
            // while(l2 != NULL)
            // { 
            //    ListNode * newNode = new ListNode(l2->val);
            //     temp->next = newNode;
            //     l2=l2->next; 
            // }
            temp->next = l2;
        }
        if(l2  == NULL)
        {
           // while(l1 != NULL)
           //  {
           //     ListNode * newNode = new ListNode(l1->val);
           //      temp->next = newNode;
           //      l1=l1->next; 
           //  } 
            temp->next = l1;
        }
        
        return ans->next;
      
    }
};